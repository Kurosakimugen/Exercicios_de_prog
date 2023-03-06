int potencia(int numero,int expoente) {
    int resultado = 1;
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

int main() {
    return 0;
}