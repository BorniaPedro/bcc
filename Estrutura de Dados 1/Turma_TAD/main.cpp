#include <iostream>
#include "class.h"
using namespace std;

int main(){

   Turma* t1 = new Turma("2024-1", 100);
   Turma* t2 = new Turma("2023-2", 20);

   Aluno* a1 = new Aluno("a001", "Bornia");
   Aluno* a2 = new Aluno("a002", "Grigolli");
   Aluno* a3 = new Aluno("a003", "Dudu");

   t1->matricula(a1);
   t1->matricula(a2);
   t1->matricula(a3);
   t1->matricula(new Aluno("a004", "Kenzo"));
   t1->cancelaMatricula("a002");
   t1->imprime();

	  delete t1;
     delete t2;  
	  delete a1;
   

   // t1.cancelaMatricula("15");
   // t1.imprime();

}