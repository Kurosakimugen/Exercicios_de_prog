#include "interval.h"

bool Maior_que(time_of_day a,time_of_day b) {
    bool resultado;
    if (a.h > b.h) {
        resultado =  true;
        return resultado;
    }
    if (a.h < b.h) {
        resultado = false;
        return resultado;
    }
    if (a.h == b.h) {
        if (a.m > b.m) {
            resultado =  true;
            return resultado;
        }
        resultado = false;
    }
    return resultado;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
    int resultado = 0;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        if (Maior_que(t,a[i].start)) { //verificar que o tempo pertence ao intervalo
            if (Maior_que(a[i].end,t) == false) { //verificar que o tempo esta abaixo do limite
                temp = a[i].end.h - a[i].start.h; //soma do tempo do intervalo
                temp *= 60;
                resultado += temp;
                resultado += (a[i].end.m - a[i].start.m);
                if (i == 0) {
                    u.start = a[i].start;
                    u.end = a[i].end;
                }
                if (Maior_que(u.start,a[i].start)) {//verificar que aba de baixo é mais pequena das interseções
                    u.start = a[i].start;
                }
                if (Maior_que(a[i].end, u.end)) {
                    u.end = a[i].end;
                }
            }
        }
    }
    return resultado;
}


int main() {
    return 0;
}