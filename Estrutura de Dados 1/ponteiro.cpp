#include <iostream>
using namespace std;

void L01_EX01(){
    
    int v[4] = {1, 2, 3, 4};
    int* p = v;
    int* w = v+2;

    int i = 30;
    int* x = &i;

    printf("%p\n", p);
    printf("%p\n", v);
    printf("%d\n", *v+2);
    printf("%d\n", v[2]);
    printf("%p\n", w);
    printf("%p\n", &x);
    printf("%p\n", x);
    printf("%p\n", &i);
    printf("%d\n", *x);
    printf("\n");
    printf("%p\n", p+3);
    printf("%p\n", v+3);
    printf("%p\n", p[3]);
}

void L01_EX02(){

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    int* v[4] = {&a, &b, &c, &d};

    int** p = v;

    printf("%p\n", p);
    printf("%p\n", v[0]);
    printf("%d\n", a);
    printf("%p\n", b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("\n");
   
    printf("%p\n", *p);
    printf("%d\n", **p);
    printf("%p\n", p[1]);
    printf("%d\n", **p+2);
    printf("%p\n", v);
    printf("%p\n", v[3]);
    printf("%p\n", v+3);
    printf("%p\n", *v+3);
    printf("%d\n", **v+3);
}

void L01_EX03(){

    int v1[3] = {1, 2, 3};
    int v2[3] = {4, 5, 6};

    int* p1 = v1;
    int* p2 = v2;

    int* m[2] = {v1, v2};
    int** pm = m;

    printf("%p\n", p1);
    printf("%p\n", v1);
    printf("%p\n", p2);
    printf("%p\n", v2);
    printf("%p\n", m);
    printf("%p\n", pm);
    printf("\n");
    printf("%p\n", p1+2);
    printf("%p\n", v1+2);
    printf("%d\n", p2[1]);
    printf("%d\n", *(v2+1));
    printf("%p\n", m);
    printf("%p\n", *m);
    printf("%p\n", pm);
    printf("%p\n", *pm);
    printf("%p\n", m[0]);
    printf("%p\n", *(m+1));
    printf("%d\n", **(m+1));
    printf("%d\n", *pm[1]);
    printf("%d\n", m[0][2]);
    printf("%p\n", pm+1);
    printf("%p\n", *(pm+1));
    printf("%p\n", *(pm+1)+2);
    printf("%d\n", *(*(pm+1)+2));
}

void L02_EX01(){
    typedef struct produto{
        int codigo;
        char descricao[12];
        float preco;
    } Produto;

    Produto prod = {10, "Teclado", 98.5};
    Produto* p = &prod;
    Produto* pi = &prod;
    Produto* pc = &prod+1;
    Produto* pf = &prod+2;

    printf("%p\n", p);
    printf("%p\n", pi);
    printf("%p\n", pc);
    printf("%p\n", pf);
    printf("\n");
    printf("%p\n", &p);
    printf("%p\n", &prod);
    printf("%d\n", prod.codigo);
    printf("%d\n", p->codigo);
    printf("%d\n", (*p).codigo);
    printf("%p\n", &(p->codigo));
    printf("%p\n", prod.descricao);
    printf("%p\n", p->descricao);
    printf("%p\n", &(p->descricao));
    printf("%p\n", &(prod.descricao));
    printf("%f\n", prod.preco);
    printf("%f\n", p->preco);
    printf("%p\n", &(p->preco));
    printf("%p\n", &(prod.preco));
}

int main(){
    
    L02_EX01();

    return 0;
}