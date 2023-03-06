#include "print_array.h"

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]) {
    int nai = 0;
    int nbi = 0;
    int nc = na+nb;
    for (int ci = 0; ci < nc ; ci++) {
        if(nai < na && nbi < nb) {
            if (a[nai] < b[nbi]) {
                c[ci] = a[nai];
                nai++;
            }
            else {
                c[ci] = b[nbi];
                nbi++;
            }
        }
        else {
            if (nai == na) {
                c[ci] = b[nbi];
                nbi++;
            }
            else {
                c[ci] = a[nai];
                nai++;
            }
        }
    }
}

int main() {
    const int NA = 4, NB = 6;
    int a[NA] = { 1, 2, 4, 7};
    int b[NB] = { 0, 3, 5, 6, 8, 9};
    int c[NA+NB];
    merge_arrays(a, NA, b, NB, c);
    print_array(c, NA+NB);
    return 0;
}