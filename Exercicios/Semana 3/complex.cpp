#include "complex.h"
#include <iostream>
#include <cmath>

using namespace std;

double potencia(double numero,int expoente) {
    double resultado = 1;
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

void add(const complex& a, const complex& b, complex& r) {
    r.x = a.x + b.x; //soma da parte real
    r.y = a.y + b.y; //soma da parte imaginária
}

void mul(const complex& a, const complex& b, complex& r) {
    r.x = (a.x * b.x) - (a.y * b.y); //multiplicação da parte real
    r.y = (a.x * b.y) + (a.y * b.x); //multiplicação da parte imaginária
}

double norm(const complex& c) {
    double resultado;
    resultado = sqrt(potencia(c.x,2)+potencia(c.y,2));
    return resultado;
}

int main() {
    complex a { 0, 1 }, b { 2, 1}, s, m;
    add(a, b, s); 
    mul(a, b, m);
    cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n';
    return 0;
}