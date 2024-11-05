#include <stdio.h>
#include <iostream>
using namespace std;

// Util
void troca(int*v, int a, int b) {
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}


// Selection sort 
int max(int* v, int ini, int fim) {
    int maior = v[ini];
    for (int i=ini+1; i<=fim; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

void selectionSort(int* v, int n) {
    int i;
    int maior;
    for (i=n-1; i>0; i--) {
        maior = max(v, 0, i);
        troca(v, maior, i);
    }
}

//Bubble sort
void bubbleSort (int* v, int n) {
    int i, j;
    for (j=n-1; j>0; i--) {
        for (i=0; i<j; i++) {
            if (v[i] > v[i+1]) {
                troca(v, i, i+1);
            }
        }
    }
}

//Insertion sort
void insertion (int* v, int k) {
    int i = k-1;
    int x = v[k];
    while ((i>=0) && (v[i]>x)) {
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