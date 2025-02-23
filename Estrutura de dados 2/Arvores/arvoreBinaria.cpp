#include <stdio.h>
#include <iostream>

typedef struct ab{
    struct ab* esq;
    struct ab* dir;
    int chave;
} ab;

void preOrdem(ab *a) {
    if(a==nullptr) return;
    printf("%d\n", a->chave);
    preOrdem(a->esq);
    preOrdem(a->dir);
}

void emOrdem(ab *a) {
    if(a==nullptr) return;
    emOrdem(a->esq);
    printf("%d\n", a->chave);
    emOrdem(a->dir);
}

void posOrdem(ab *a) {
    if(a==nullptr) return;
    posOrdem(a->esq);
    posOrdem(a->dir);
    printf("%d\n", a->chave);
}