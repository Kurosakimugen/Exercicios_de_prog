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

void mandelbrot(const complex& c, unsigned int n, complex& z_n) {
    if(n == 0)  {
        z_n = { 0 , 0 };
    }
    else{
        complex anterior = { 0 , 0 };
        for (unsigned int i = 0; i < n; i++) {
            mul(anterior, anterior, z_n);
            add(z_n, c, z_n);
            anterior = z_n;
        }
    }
}

int main() {
    complex z_n;
    mandelbrot({1.2, 3.4}, 0, z_n);
    cout << z_n << '\n';
    return 0;
}