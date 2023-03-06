#include <iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;
    for(int i = 0; i <= numero; i++) {
        if(i % 3 == 0 && i % 5 != 0) { //caso de ser multiplo de 3
            cout << "Fizz" << ' ';
            continue;
        }
        if(i % 5 == 0 && i % 3 != 0) { //caso de ser multiplo de 5
            cout << "Buzz" << ' ';
            continue;
        }
        if(i % 3 == 0 && i % 5 == 0) { //caso de ser multiplo de 3 e 5
            continue;
        }
        cout << i << ' '; //caso geral
    }
    return 0;
}