#include <iostream>

using namespace std;

int nrl(const char s[], char low[]) {
    int alfabeto_unico[26] = {0};
    int resultado = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            i++;
            continue;
        }
        if (s[i] >= 'a' && s[i] <= 'z') {
            int letra = s[i] - 'a';
            if (alfabeto_unico[letra] == 0) {
                alfabeto_unico[letra]++; //contabiliza a primeira ocorrencia
                i++;
                continue;
            }
            if (alfabeto_unico[letra] == 1) {
                alfabeto_unico[letra] = 2; //já não é contabilizado porque tem de ser unico
            }
            i++;
            continue;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            int letra = s[i] - 'A';
            if (alfabeto_unico[letra] == 0) {
                alfabeto_unico[letra]++; //contabiliza a primeira ocorrencia
                i++;
                continue;
            }
            if (alfabeto_unico[letra] == 1) {
                alfabeto_unico[letra] = 2; //já não é contabilizado porque tem de ser unico
            }
            i++;
            continue;
        }
    }
    i = 0;
    int j = 0;
    while(i != 26) {
        if (alfabeto_unico[i] == 1) {
            resultado++; //adicionar ao contador as varias letras que eram unicas
            low[j] = 'a'+i; //adicionar à expressao de retorno a letra ocorrida
            j++; 
        }
        i++;
    }
    low[j] = '\0'; //fechar a string
    return resultado;
}

int main() {
    return 0;
}
