#include <iostream>

using namespace std;

int nrl(const char s[], char low[]) {
    char teste[27] =  {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char alfabeto[27] = {"abcdefghijklmnopqrstuvwxyz"};
    int resultado = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        if (s[i] >= 'a' && s[i] <= 'z') {
            int letra = int(s[i]) - int('a');
            if (teste[letra] == char(letra + 65)) {
                teste[letra] = alfabeto[letra];
            }
            else {
                teste[letra] = '-';
            }
            i++;
            continue;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            int letra = int(s[i]) - int('A');
            if (teste[letra] == char(letra)) {
                teste[letra] = alfabeto[letra];
            }
            else {
                teste[letra] = '-';
            }
            i++;
            continue;
        }
    }
    i = 0;
    while (teste[i] != '\0') {
        if (teste[i] == '-') {
            i++;
            continue;
        }
        else {
            low += alfabeto[i];
            resultado++;
            i++;
            continue;
        }
    } 
    return resultado;
}

int main() {
    const char s[] = "  F C U P  F E U P  Porto  ";
    char l[27] = { -1 };
    int r = nrl(s, l);
    cout << '\"' << s << "\" "
       << r << " \"" << l << "\"\n";
    return 0;
}
