#include <iostream>
using namespace std;

unsigned long factorial(unsigned long numero) {
    unsigned long f = 1;
    for (unsigned long i = 1; i <= numero; i++) {
        f = f * i;
    }
    return f;
}

unsigned long bc(unsigned long n, unsigned long k) {
    unsigned long resultado;
    resultado = factorial(n) / (factorial(k) * factorial(n-k));
    return resultado;
}

unsigned long bell(unsigned long n) {
    unsigned long resultado = 0;
    if(n == 0 || n == 1) {
        resultado = 1;
        return resultado;
    }
    for (unsigned long i = 0; i < n; i++) {
        resultado += bc(n-1 , i) * bell(i);
    }
    return resultado;
}

int main() {
    cout << bell(4) << '\n';
    return 0;
}