#include <iostream>
using namespace std;

int adigits(int a, int b, int c) {
    int resultado = 0;
    if (a >= b && a >= c) {
        resultado = 100 * a;
        if (b >= c) {
            resultado += 10 * b + c;
            return resultado;
        }
        else {
            resultado += 10 * c + b;
            return resultado;
        }
    }
    if (c >= b && c >= a) {
        resultado = 100 * c;
        if (b >= a) {
            resultado += 10 * b + a;
            return resultado;
        }
        else {
            resultado += 10 * a + b;
            return resultado;
        }
    }
    if (b >= c && b >= a) {
        resultado = 100 * b;
        if (c >= a) {
            resultado += 10 * c + a;
            return resultado;
        }
        else {
            resultado += 10 * a + c;
            return resultado;
        }
    }
    return 0;
}


int main() {
    return 0;
}
