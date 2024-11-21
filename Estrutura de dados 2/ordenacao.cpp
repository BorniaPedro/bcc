#include <stdio.h>
#include <iostream>
#include <limits.h>
using namespace std;

// Util
void troca(int*v, int a, int b) {
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}


// Selection sort 
int maxIndex(int* v, int ini, int fim) {
    int maiorIndex = ini;
    for (int i=ini+1; i<fim; i++) {
        if (v[i] > v[maiorIndex]) {
            maiorIndex = i;
        }
    }
    return maiorIndex;
}

void selectionSort(int* v, int n) {
    int i;
    int maior;
    for (i=n-1; i>0; i--) {
        maior = maxIndex(v, 0, i);
        troca(v, maior, i);
    }
}

// Bubble sort
void bubbleSort (int* v, int n) {
    int i, j;
    for (j=n-1; j>0; j--) {
        for (i=0; i<j; i++) {
            if (v[i] > v[i+1]) {
                troca(v, i, i+1);
            }
        }
    }
}

// Insertion sort
void insertion (int* v, int k) { //k-posiçao do primeiro elemento que nao esta ordenado
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

// Merge sort
void merge (int *v, int p, int q, int r) { //p-começo do primeiro subvetor, q-fim do primeiro subvetor, r-fim do segundo subvetor
    int *e, *d; //subvetores
    int i, j, k; //marcadores dos subvetores e vetor final
    int len1 = q-p+1;
    int len2 = r-q;
    e = (int*)malloc(sizeof(int) * (len1 + 1));
    d = (int*)malloc(sizeof(int) * (len2 + 1));
    for (i=0; i<len1; i++) {
        e[i] = v[p+i];    
    }
    e[len1] = INT_MAX;
    for (j=0; j<len2; j++) {
        d[j] = v[q+1+j];
    }
    d[len2] = INT_MAX;

    i=0;
    j=0;
    for (k=p; k<r; k++) {
        if (e[i] <= d[j]) {
            v[k] = e[i];
            i++;
        } else {
            v[k] = d[j];
            j++;
        }
    }
    free(e);
    free(d);
}

void mergeSort (int *v, int e, int d) {
    int meio;
    if (e < d) {
        meio = (e+d)/2;
        mergeSort(v, e, meio);
        mergeSort(v, meio+1, d);
        merge(v, e, meio, d);
    }
}

// Quick sort
int partition (int *v, int p, int r) { //p-começo do vetor, r-fim do vetor
    int pivo;
    int i, j; //esquerda do i=menor que o pivo, direita do j=maior que o pivo
    pivo = v[r];
    i = p-1;
    for (j=p; j<r; j++) {
        if (v[j] <= pivo) {
            i++;
            troca(v, i, j);
        }
    }
    troca(v, i+1, r);
    return i+1;
}

void quickSort (int *v, int e, int d) {
    int pivo;
    if (e < d) {
        pivo = partition(v, e, d);
        quickSort(v, e, pivo-1);
        quickSort(v, pivo+1, d);
    }
}

// Heapify
void maxHeapify(int* v, int i, int th) {
    int e, d;
    int maior = i;
    e = 2 * i + 1;
    d = e + 1;

    if ((e < th) && (v[e] > v[i])) {
        maior = e;
    }
    if ((d < th) && (v[d] > v[i])) {
        maior = d;
    }
    if (maior != i) {
        troca(v, i, maior);
        maxHeapify(v, maior, th);
    }
}

void buildMaxHeap(int* v, int n) {
    int i;
    for (i=n/2; i >= 0; i--) {
        maxHeapify(v, i, n);
    }
}

void heapSort(int* v, int n) {
    int i;
    buildMaxHeap(v, n);
    for (i = n-1; i > 0; i--) {
        troca(v, 0, i);
        maxHeapify(v, 0, i);
    }
}
