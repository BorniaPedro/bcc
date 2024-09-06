#include <iostream>
using namespace std;

// EX 01
/*
int mdc(int x, int y) {
   if (y <= x && x%y == 0) {
      return y;
   }

   else if(x < y) {
      return mdc(y, x);
   }

   else {
      return mdc(y, x%y);
   }
   
}
int main() {
   int x, y;
   cout << "Digite dois inteiros: ";
   cin >> x >> y;

   cout << mdc(x,y) << endl;

   return 0;
}
*/

// EX 02
/*
bool buscaSequencial(int elemento, int* v, int tam) {
   if(tam == 0) {
      return false;
   }
   if(v[tam-1] == elemento) {
      return true;
   }
   buscaSequencial(elemento, v, tam-1);
}
int main() {
   int v[] = {3, 7, 10, 5, 8};
   int tam = sizeof(v) / sizeof(v[0]);
   int elemento = 1;

   if (buscaSequencial(elemento, v, tam)) {
      cout << "Elemento encontrado no array!" << endl;
   } else {
      cout << "Elemento nao encontrado no array." << endl;
   }

   return 0;
}
*/

// EX 03
/*
bool buscaBinariaIterativa(int elemento, int* v, int tam) {
   int inicio = 0;
   int fim = tam-1;

   while(inicio <= fim) {
      int meio = inicio + (fim-inicio) /2;
      if(v[meio] == elemento) {
         return true;
      } else if (v[meio] < elemento) {
         inicio = meio + 1;
      } else {
         fim = meio - 1;
      }
   }
   return false;
}
bool buscaBinariaRecursiva(int elemento, int* v, int inicio, int fim) {
   if(inicio > fim) {
      return false;
   }
   int meio = inicio + (fim-inicio) /2;
   if(v[meio] == elemento){
      return true;
   } else if (v[meio] > elemento) {
      return buscaBinariaRecursiva(elemento, v, inicio, meio-1);
   } else if (v[meio] < elemento) {
      return buscaBinariaRecursiva(elemento, v, meio+1, fim);
   }
   return false;
}
int main(){
   int v[] = {1, 3, 5, 7, 9, 11, 13, 15};
   int tam = sizeof(v) / sizeof(v[0]);
   int elemento = 3;

   if (buscaBinariaIterativa(elemento, v, tam)) {
        cout << "Elemento encontrado (iterativa)!" << endl;
   } else {
        cout << "Elemento nao encontrado (iterativa)." << endl;
   }

   if (buscaBinariaRecursiva(elemento, v, 0, tam - 1)) {
        cout << "Elemento encontrado (recursiva)!" << endl;
   } else {
        cout << "Elemento nao encontrado (recursiva)." << endl;
   }

   return 0;
}
*/

//EX04
bool explorar(int l[10][10], int i, int j) {
   if(l[i][j] == 0){
      l[i][j] = 2;
      printf("[%d, %d]", i, j);
      if(i == 9 && j == 9){
         return true;
      } 
      if(explorar(l, i+1, j)) return true;
      if(explorar(l, i, j+1)) return true;
      if(i>0){
         if(explorar(l, i-1, j)) return true;
      }
      if(j>0){
         if(explorar(l, i, j-1)) return true;
      }
      return false;
   }
   if(l[i][j] == 1 or l[i][j] == 2) {
      return false;
   }
}
int labirinto[10][10] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 1, 1, 1, 0, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0, 1, 0},
    {1, 1, 1, 1, 1, 1, 0, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
};
int imprimir_labirinto(int l[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", l[i][j]);
        }
        printf("\n");
    }
}

int main(){
    imprimir_labirinto(labirinto);
    bool encontreiSaida = explorar(labirinto, 0, 0);
    if(encontreiSaida){
        printf("\nAchei o caminho para a saida :");
    } else {
			printf("\nNao achei o caminho para a saida :");
		}
    printf("\n");
    imprimir_labirinto(labirinto);    
    return 0;
}