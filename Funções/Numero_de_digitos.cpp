int Numero_de_digitos (int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

int main() {
    return 0;
}