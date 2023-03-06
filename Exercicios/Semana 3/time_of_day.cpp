#include "time_of_day.h"
#include <iostream>

time_of_day tick(time_of_day t) {
    t.m += 1;
    if(t.m == 60) {
        t.m = 0;
        t.h += 1;
        if (t.h == 24) {
            t.h = 0;
        }
    }
    return t;
}

int main() {
    return 0;
}