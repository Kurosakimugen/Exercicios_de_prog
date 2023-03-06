bool leap_year(int y) {
    bool resultado = false;
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
        resultado = true;
        return resultado;
    }
    return resultado;
}

int main() {
    return 0;
}