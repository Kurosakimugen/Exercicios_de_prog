#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int somatorio;
	int precisao;
    cin >> somatorio;
    cin >> precisao;
    double x = 0;
    double soma;
    int parte_da_soma;
    double temp;
    for (int i = 0; i <= somatorio; i++ ) {
    	parte_da_soma = 2 * i + 1;
        if (i % 2 == 0) {
            temp = 1.0;
        }
        else {
            temp = -1.0;
        }
        soma = temp/parte_da_soma;
        x += soma;
    }
    x *= 4;
    cout << fixed << setprecision(precisao) << x;
    return 0;
}
