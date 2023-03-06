
long algoritmo_de_euclides (int a, int b) { //algoritmo para calcular o maximo divisor comum
    long resultado;
    if (b == 0) {
        resultado = a;
        return resultado;
    }
    else {
        resultado = algoritmo_de_euclides(b, a % b);
        return resultado;
    }
}
int main() {
    return 0;
}