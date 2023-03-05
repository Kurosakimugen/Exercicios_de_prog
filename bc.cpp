#include <iostream>
using namespace std;

unsigned long bc(unsigned long n, unsigned long k) {
    unsigned long resultado = 1;
    for (unsigned long i = 0; i <= k; i++) {
        resultado *= (n-i)/(k-i);
    }
    return resultado;
}

int main() {
    cout << bc(5, 0) << '\n';
    return 0;
}
