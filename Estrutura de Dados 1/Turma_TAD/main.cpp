#include <iostream>
using namespace std;

int main(){

   Turma* t1 = new Turma("2024-1", 100);
   Turma* t2 = new Turma("2023-2", 20);

   Aluno* a1 = new Aluno("1", "Joao");
   Aluno a2("2", "Maria");

   t1->matricula(a1);
   t1->matricula(a2);
   t1->matricula(new Aluno("3", "Jose"));
	  delete t1;
	  
	  delete a1;
   

   // t1.cancelaMatricula("15");
   // t1.imprime();

}