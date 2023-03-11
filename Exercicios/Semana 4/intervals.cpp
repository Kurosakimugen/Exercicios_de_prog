#include "interval.h"

bool operator<(time_of_day a, time_of_day b){ //funçao que permite utilizar apenas o operador < para comparar
  return a.h < b.h || (a.h==b.h && a.m<b.m);
}
bool operator==(time_of_day a, time_of_day b){ //funçao que permite utilizar apenas o operador == para comparar
  return a.h == b.h && a.m == b.m;
}
bool operator>(time_of_day a, time_of_day b){  //funçao que permite utilizar apenas o operador  > para comparar
  return b < a;
}
bool operator>=(time_of_day a, time_of_day b){ //funçao que permite utilizar apenas o operador >= para comparar
  return a > b || a == b;
}
bool operator<=(time_of_day a, time_of_day b){ //funçao que permite utilizar apenas o operador <= para comparar
  return a < b || a == b;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
    int resultado = 0;
    int temp = 0;
    u.start = t;
    u.end = t;
    for (int i = 0; i < n; i++) {
        if (t >= a[i].start && t < a[i].end) {
            if (u.start >= a[i].start) { //verificar que aba de baixo é mais pequena das interseções
                u.start = a[i].start;
            }
            if (a[i].end >= u.end) {
                u.end = a[i].end;
            }
        }
    }
    temp = u.end.h - u.start.h; //soma do tempo do intervalo
    temp *= 60;
    resultado += temp;
    resultado += (u.end.m - u.start.m);
    return resultado;
}


int main() {
    return 0;
}