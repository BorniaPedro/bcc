#include <stdlib.h>
#include <stdio.h>
#include <iostream>

typedef struct ABB{
    struct ABB *esq;
    struct ABB *dir;
    int chave;
} ABB;

ABB* ABB_Buscar(ABB *A, int chave) {
    if(A==NULL) return;
    if(A->chave == chave) return A;
    if(chave < A->chave) {
        return ABB_Buscar(A->esq, chave);
    }
    return ABB_Buscar(A->dir, chave);
}

ABB* ABB_Criar(int chave, ABB* esq, ABB* dir) {
    ABB* novo;

    novo = (ABB*) malloc(sizeof(ABB));
    novo->chave = chave;
    novo->esq = esq;
    novo->dir = dir;

    return novo;
}

void ABB_Inserir(ABB **A, int chave) {
    if((*A) == NULL) {
        *A = ABB_Criar(chave, NULL, NULL);
        return;
    } else {
        if(chave < (*A)->chave) {
            ABB_Inserir(&(*A)->esq, chave);
        } else {
            ABB_Inserir(&(*A)->dir, chave);
        }
    }
}