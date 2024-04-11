#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Aluno {
  private:
   string ra;
   string nome;

  public:
   Aluno() {
      this->ra = "0";
      this->nome = "undefined";
   }

   Aluno(string _ra, string _nome) {
      // ra = _ra;
      // nome = _nome;
      this->ra = _ra;
      this->nome = _nome;
   }

   ~Aluno() { cout << "Destruindo" << endl; }

   string getRa() { return this->ra; }

   void setRa(string ra) { this->ra = ra; }

   void imprimir() {
      cout << "(" << this->ra << ", " << this->nome << ")" << endl;
   }
};

class Turma {
    private:
     string codigoDisciplina;
     string codigoTurma;
     string semestre;
        
     Aluno** alunos;
     int tamVetor;
     int qntde;

    public:
     Turma(string semestre, int tamVetor){
        this->codigoDisciplina = "";
        this->codigoTurma = "";
        this->semestre = semestre;
        this->alunos = new Aluno*[tamVetor];
        this->tamVetor = tamVetor;
        this->qntde = "0";
     }

     ~Turma(){
        cout << "Destruindo" << endl;
     }


     bool matricula(Aluno* a){

     }

     int cancelaMatricula(string ra){

     }

     void imprime(){

     }  
}