#include <stdlib.h>
#include <stdio.h>
#include <iostream>

typedef enum {
    C_VERMELHO,
    C_PRETO
} ARN_COR;

typedef struct ARN {
    struct ARN *esq;
    struct ARN *dir;
    int chave;
    int valor;
    ARN_COR cor;
} ARN;



ARN* ARN_Criar(int chave, int valor) {
    ARN* novo;
    novo = (ARN*)malloc(sizeof(ARN));

    novo->chave = chave;
    novo->valor = valor;
    novo->cor = C_VERMELHO;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

int vermelho (ARN *A) {
    if(A == NULL) {
        return 0;
    }
    return A->cor == C_VERMELHO ? 1 : 0;
}

void inverter_cores(ARN *A) {
    A->cor = C_VERMELHO;
    A->esq->cor = C_PRETO;
    A->dir->cor = C_PRETO;
}

void rot_esq(ARN *A) {
    ARN *h, *x;
    h = *A;
    x = h->dir;
    h->dir = x->esq;
    x->esq = h;
    x->cor = h->cor;
    h->cor = C_VERMELHO;
    *A = x;
}

void rot_dir(ARN *A) {
    ARN *h, *x;
    h = *A;
    x = h->esq;
    h->esq = x->dir;
    x->dir = h;
    x->cor = h->cor;
    h->cor = C_VERMELHO;
    *A = x;
}

void ARN_Inserir_R(ARN **A, int chave, int valor) {
    if((*A) == NULL) {
        *A = ARN_Criar(chave, valor);
    }

    if(chave < (*A)->chave) {
        ARN_Inserir_R(&(*A)->esq, chave, valor);
    }

    if(chave > (*A)->chave) {
        ARN_Inserir_R(&(*A)->dir, chave, valor);
    }

    if(vermelho((*A)->dir) && !vermelho((*A)->esq)) {
        rot_esq(A);
    }

    if(vermelho((*A)->esq) && vermelho((*A)->esq->esq)) {
        rot_dir(A);
    }

    if(vermelho((*A)->dir) && vermelho((*A)->esq)) {
        inverter_cores(A);
    }
}

void ARN_Inserir(ARN **A, int chave, int valor) {
    ARN_Inserir_R(A, chave, valor);
}