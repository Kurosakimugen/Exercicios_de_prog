int max(const int a[], int n) {
    int maximo = a[0];
    for (int i = 0; i < n; i++) {
        if (maximo < a[i]) {
            maximo = a[i];
        }
    }
    return maximo;
}

int main() {
    return 0;
}