#include <iostream>
using namespace std;

int stringFindFirst(string s, char caracter) {
    int tam = s.size();
    for (int i = 0; i < tam; i++){
        if (caracter == s[i]){
            return i;
        } 
    }
    return 0;
}

bool isLetter(char c) {
    string letras = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int tam = letras.size();
    for (int i = 0; i < tam; i++){
        if(c == letras[i]){
            return true;
        }
    }
    return false;
}

bool checkName(string s){
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

int* createArray(int n, bool ord){
    int* v;
    v - (int*)calloc(n, sizeof(int));
    int cont;
    if (ord == true){
        cont = 1;
        for (int i = 0; i<= n; i++){
            v[i] = cont;
            cont += 1;
        }
    } else {
        cont = n;
        for (int i = 0; i <= n; i++){
            v[i] = cont;
            cont -= 1;
        }
    }
    free(v);
    return v;
}

int* arrayConcat(int* v1, int n1, int* v2, int n2){
    int tamv3 = n1 + n2;
    int* v3 = new int[tamv3];
    int cont = 0;
    for(int i = 0; i < n1; i++){
        v3[i] = v1[cont];
        cont++;
    }
    cont = n1; 
    for(int j = 0; j < n2; j++){
        v3[j+n1] = v2[cont];
        cont++;
    }
    return v3;
}

int* arrayMerge(int* v1, int n1, int*v2, int n2){
    int tamv3 = n1 + n2;
    int* v3 = new int[tamv3];
    int cont1 = 0;
    int cont2 = 0;
    for(int i = 0; i < tamv3; i++){
        if(cont1 < n1 && cont2< n2){
            if(v1[cont1] < v2[cont2]){
                v3[i] = v1[cont1];
                cont1++;
            } else if(v2[cont2] < v1[cont1]){
                v3[i] = v2[cont2];
                cont2++;
            } else if(v1[cont1] == v2[cont2]){
                v3[i] = v1[cont1];
                v3[i+1] = v2[cont2];
                cont1++;
                cont2++;
                i++;
            }
        } else if(cont1 < n1){
            v3[i] = v1[cont1];
            cont1++;
        } else if(cont2 < n2){
            v3[i] = v2[cont2];
            cont2++;
        }
    }
    return v3;
}

int main(){
    // int e01 = stringFindFirst("o rato roeu a roupa do rei de roma", 'r');
    // printf("%d", e01);

    // bool e02 = isLetter('v');
    // printf("%u", e02);
    
    // bool e03 = checkName("Felipe Kenzo");
    // printf("%u", e03);

    // createArray(5, true);

    // int v1[4] = {1,2,3,4};
    // int v2[3] = {6,2,3};
    // arrayConcat(v1, 4, v2, 3);

    int v1[4] = {1,4,6,8};
    int v2[3] = {2,3,4};
    int n1 = 4;
    int n2 = 3;

    int* result = arrayMerge(v1, n1, v2, n2);
    int n3 = n1 + n2;

    for(int i = 0; i < n3; i++){
        printf("%d ", result[i]);
    }

    return 0;
}