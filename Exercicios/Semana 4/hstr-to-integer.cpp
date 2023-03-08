unsigned long potencia(int numero,int expoente) {
    unsigned long resultado = 1;
    if (expoente == 0) {
        return resultado;
    }
    if (expoente == 1) {
        return numero;
    }
    for(int i = 1; i <= expoente; i++) {
        resultado = resultado * numero;
    }
    return resultado;
}

unsigned long hstr_to_integer(const char hstr[]) {
    int i = 0;
    unsigned long resultado = 0;
    int expoente = 0;
    while(hstr[expoente] != '\0') {
        expoente++;
    }
    expoente--;
    while(hstr[i] != '\0') {
        if (hstr[i] >= '0' && hstr[i] <= '9') {
            unsigned long valor_hexa = int(hstr[i])-int('0');
            unsigned long valor_da_posicao = valor_hexa * potencia(16,expoente);
            resultado += valor_da_posicao;
            expoente--;
            i++;
            continue;
        }
        if (hstr[i] >= 'A' && hstr[i] <= 'F') {
            unsigned long valor_hexa = int(hstr[i])-int('A') + 10; //subtrair por A para tirar o excesso e depois adicionar 10 para o valor estar entre 10 e 15
            unsigned long valor_da_posicao = valor_hexa * potencia(16,expoente);
            resultado += valor_da_posicao;
            expoente--;
            i++;
            continue;
        }
        if (hstr[i] >= 'a' && hstr[i] <= 'f') {
            unsigned long valor_hexa = int(hstr[i])-int('a') + 10; //subtrair por a para tirar o excesso e depois adicionar 10 para o valor estar entre 10 e 15
            unsigned long valor_da_posicao = valor_hexa * potencia(16,expoente);
            resultado += valor_da_posicao;
            expoente--;
            i++;
            continue;
        }
    }
    return resultado;
}

int main() {
    return 0;
}
