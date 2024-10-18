#include <stdio.h>
#include <iostream>
using namespace std;

int posMaior(int* v, int ini, int fim){
    int maior = ini;
    for(int i = 0; i <= fim; i++){
        if(v[i] > v[maior]){
            maior = i;
        }
    }
    return maior;
}

void ordenar(int* v, int n){
    for(int i = n-1; i > 0; i--){
        int m = posMaior(v, 0, i);
        swap(v[m], v[i]);
    }
}

int main(){
    int v[] = {4,2,1,6,3,0,5};
    int n = 7;
    ordenar(v, n);

    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }

    return 0;
}
