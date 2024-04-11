#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Turma {
    private:
     string codigoDisciplina;
     string codigoTurma;
     string semestre;
        
     Aluno** alunos;
     int tamVetor;
     int qntde;

    public:
     Turma(string semestre){
        this->codigoDisciplina = "";
        this->codigoTurma = "";
        this->semestre = semestre;
     }

     Turma(){

     }

     ~Turma(){
        cout << "Destruindo" << endl;
     }

     
}