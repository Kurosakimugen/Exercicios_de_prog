#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

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

int solve_eq(int a, int b, int c, double& x1, double& x2) {
    int parcela_da_raiz = potencia(b,2) - (4 * a * c);
    int num_de_sol;
    if (parcela_da_raiz < 0) {
        x1 = NAN;
        x2 = NAN;
        num_de_sol = 0;
    }
    if (parcela_da_raiz == 0) {
        x1 = (-b) / (2 * a);
        x2 = NAN;
        num_de_sol = 1;
    }
    if (parcela_da_raiz > 0) {
        x1 = ((-b) - sqrt(parcela_da_raiz)) / (2 * a);
        x2 = ((-b) + sqrt(parcela_da_raiz)) / (2 * a);
        num_de_sol = 2;
    }
    return num_de_sol;
}

int main() {
    return 0;
}