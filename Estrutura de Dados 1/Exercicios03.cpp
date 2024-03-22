#include <iostream>
using namespace std;

int EX01(string string, char caracter) {
    int tam = string.size();
    for (int i = 0; i < tam; i++){
        if (caracter == string[i]){
            return i;
        } 
    }
    return 0;
}

bool EX02(char c) {
    string letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int tam = letras.size();
    for (int i = 0; i < tam; i++){
        if(c == letras[i]){
            return true;
        }
    }
    return false;
}

bool EX03(string s){
    string letras = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int tamString = s.size();
    int tamLetras = letras.size();
    for (int i = 0; i < tamString; i++){
        
        if (s[i] == letras[0] and s[i+1] == letras[0]) {
                return false;
        }

        if (s[0] == letras[0]){
            return false;
        }

        if (s[tamString-1] == letras[0]){
            return false;
        }

        for (int j = 0; j < tamLetras; j++){    
        
            if (s[i] == letras[j]){
                break;
            }

            if (j == (tamLetras - 1)){
                return false;
            }
        } 
    }
    return true;
}


int main(){
    // int pos = EX01("o rato roeu a roupa do rei de roma", 'r');
    // printf("%d", pos);

    // bool ex02 = EX02('v');
    // printf("%u", ex02);
    
    bool ex03 = EX03("Felipe Kenzo");
    printf("%u", ex03);

    return 0;
}