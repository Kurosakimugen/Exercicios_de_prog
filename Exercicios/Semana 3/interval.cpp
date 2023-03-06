#include "interval.h"
#include <iostream>

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

interval intersection(interval a, interval b) {
    interval resultado = {{0,0},{0,0}};
    if(Maior_que(a.end,b.start) && Maior_que(b.end,a.start)) {
        if(Maior_que(a.start,b.start)) {
            resultado.start = a.start;
        }
        else {
            resultado.start = b.start;
        }
        if(Maior_que(a.end,b.end)) {
            resultado.end = b.end;
        }
        else {
            resultado.end = a.end;
        }

    }
    return resultado;
}

int main() {
    cout << intersection( { { 12, 30 }, { 14, 31 } },
                        { { 14, 30 }, { 18, 30 } } ) << '\n';
    return 0;
}