#include <iostream>
#include <time.h>
using namespace std;



void executaCarga(int carga){
    for(int i = 0; i < carga; i++);
}

void ordem_n1(int n, int carga){
    for(int i = 0; i < n; i++){
        executaCarga(carga);
    }
}

void ordem_n2(int n, int carga){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            executaCarga(carga);
        }
    }
}

void ordem_logN(int n, int carga){
    for(int i = 0; i < n; i++){
        executaCarga(carga);
    }

    while(n > 0){
        executaCarga(carga);
        n = n/2;
    }
}

void ordem_NlogN(int n, int carga){
    for(int i = 0; i < n; i++){
        int j = n;
        while(j > 0){
            executaCarga(carga);
        n = n/2;
        }
    }
}

int main(){
    int n = 1;
    int carga = 1;

    clock_t inicio, fim;

    inicio = clock();
    // ordem_n1(n, carga);
    // ordem_n2(n, carga);
    // ordem_logN(n, carga);
    // ordem_NlogN(n, carga);

    fim = clock();

    float tempo = (float)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo: %.2f \n", tempo);
}