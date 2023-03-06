bool primo(int numero) {
    bool resultado = true;
    if (numero == 1) {
        resultado = false;
        return resultado;
    }
    for (int i = 1; i < numero; i++) {
        if (i == 1) {
            continue;
        }
        if (numero % i == 0) {
            resultado = false;
        }
    }
    return resultado;
}

int main() {
    return 0;
}