#include <stdio.h>
#include <iostream>
using namespace std;

//TOPICO 2

//Util
void troca(int*v, int a, int b) {
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

int maxIndex(int* v, int ini, int fim) {
    int maiorIndex = ini;
    for (int i=ini+1; i<fim; i++) {
        if (v[i] > v[maiorIndex]) {
            maiorIndex = i;
        }
    }
    return maiorIndex;
}


//1) Reescreva o algoritmo de ordenação por seleção apresentado no Vídeo 1 de tal forma que ordene o vetor escolhendo os menores elementos ao invés dos maiores
/*
int minIndex(int* v, int ini, int fim) {
    int menorIndex = ini;
    for (int i=ini+1; i<fim; i++) {
        if (v[i] < v[menorIndex]) {
            menorIndex = i;
        }
    }
    return menorIndex;
}
void selectionSort(int* v, int n) {
    int i;
    int menorIndex;
    for (i=0; i<n; i++) {
        menorIndex = minIndex(v, i, n);
        troca(v, i, menorIndex);
    }
}
*/

//2) O algoritmo abaixo é uma modificação do algoritmo de ordenação pelo método da bolha. A idéia é que detecte a situação que nenhuma troca ocorreu durante uma varredura, o que indica que o vetor já  está ordenado. Neste caso não é necessário realizar mais varreduras no vetor, pois já encontra-se ordenado. Modifique e implemente o algoritmo a seguir para que a verificação de trocas inicie da forma mais tardiapossível (ou seja, de forma que nem sempre j comece em 0).
/*
void bubbleSort (int* v, int n) {
    int trocas;
    int j;
    int limite = n-1;
    trocas = 1;
    while (trocas) {
        trocas = 0;
        for (j = 0; j < limite; j++) {
            if (v[j] > v[j+1]) {
                trocas++;
                troca (v, j, j+1);
            }
        }
        limite--;
    }
}
*/

//3) Altere os algoritmos de ordenação por seleção, bolha, e inserção apresentados nos vídeos 1, 2 e 3 de forma que os vetores resultantes estejam ordenados em ordem decrescente
// Selection sort
void selectionSort(int* v, int n) {
    int i;
    int maior;
    for (i = 0; i < n; i++) {
        maior = maxIndex(v, i, n);
        troca(v, maior, i);
    }
}

//Bubble sort
void bubbleSort (int* v, int n) {
    int i, j;
    for (j = 0; j < n; j++) {
        for (i = 0; i < j; i++) {
            if (v[i] < v[i+1]) {
                troca(v, i, i+1);
            }
        }
    }
}

//Insertion sort
void insertion (int* v, int k) {
    int i = k-1;
    int x = v[k];
    while ((i >= 0) && (v[i] > x)) {
        v[i+1] = v[i];
        i--;
    }
    v[i+1] = x; 
}
void insertionSort (int*v, int n) {
    int j;
    for (j=1; j>n; j++) {
        insertion(v, j);
    }
}



int main() {
    int v1[] = {3,5,2,7,1};
    int v2[] = {3,5,2,7,1};
    int v3[] = {3,5,2,7,1};
    int n = 5;
    
    //Ex 01
    // selectionSort(v1, n);
    // for (int i=0; i<n; i++) {
    //     cout << v1[i];
    // }

    //Ex 02
    // bubbleSort(v1, n);
    // for (int i=0; i<n; i++) {
    //     cout << v1[i];
    // }

    // Ex 03
    selectionSort(v1, n);
    bubbleSort(v2, n);
    insertionSort(v3, n);
    for (int i=0; i<n; i++) {
        cout << v1[i];
    }
    cout << endl;
    for (int i=0; i<n; i++) {
        cout << v2[i];
    }
    cout << endl;
    for (int i=0; i<n; i++) {
        cout << v3[i];
    }

    return 0;
}