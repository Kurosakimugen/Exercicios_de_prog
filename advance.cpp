#include <iostream>
using namespace std;

bool leap_year(int y) {
    bool resultado = false;
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
        resultado = true;
        return resultado;
    }
    return resultado;
}

int dias_do_mes (int mes, int ano) {
    int dias;
    switch (mes) {
        case 2:
            dias = leap_year(ano) ? 29 : 28; //Fevereiro
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        default:
            dias = 30;
            break;
    }
    return dias;
}

void advance(int delta, int& dia, int& mes, int& ano) {
    while (delta >= 0) {
        int dias_que_faltam = dias_do_mes(mes , ano) - dia; //calculo do nº de dias que faltam para o fim do mes
        if (dias_que_faltam >= delta) { //caso nao ultrapasse para o mes seguinte
            dia += delta;
            break;
        }
        else {
            delta -= dias_que_faltam;
            mes++;
            if (mes == 13) { //caso seja o mes de dezembro
                mes = 1;
                ano ++;
            }
            dia = 0;
        }
    }
}

int main() {
    return 0;
}
