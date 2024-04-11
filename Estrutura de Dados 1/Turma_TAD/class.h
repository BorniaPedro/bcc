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
     Turma(string _semestre, int _tamVetor){
        this->codigoDisciplina = "";
        this->codigoTurma = "";
        this->semestre = _semestre;
        this->alunos = new Aluno*[_tamVetor];
        this->tamVetor = _tamVetor;
        this->qntde = 0;
     }

     ~Turma(){
        cout << "Destruindo" << endl;
     }

     bool matricula(Aluno* a){
        if(qntde >= tamVetor){return false;}

        alunos[qntde] = a;
        qntde++;
        return true;
     }

     int cancelaMatricula(string ra){
        for (int i = 0; i < qntde; i++) {
            if (alunos[i]->getRa() == ra) {
                for (int j = i; j < qntde - 1; j++) {
                    alunos[j] = alunos[j + 1];
                }
                qntde--;
                return 1;
            }
        }
        return 0;
     }

     void imprime(){
        for (int i = 0; i < qntde; i++) {
            alunos[i]->imprimir();
        }
      }   

};