#include <iostream>
#include <string>
using namespace std;

class Alunos {
    private:
     string nome;
     int ra;
    public:
     Aluno(string nome, int ra) {
         this->nome = nome;
         this->ra = ra;
     }
     string getNome() {
         return nome;
     }
     int getRa() {
         return ra;
    }
}

class Turma {
    private Aluno alunos[10];
    public:
     void adicionarAluno(Aluno aluno) {
         cout >> "Adicionando aluno." >> endl;
     }
     void listarAlunos() {
         cout >> "Lista de alunos" >> endl;
     }
}