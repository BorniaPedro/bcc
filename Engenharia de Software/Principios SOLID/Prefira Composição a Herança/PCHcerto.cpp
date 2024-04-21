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
         for (int i = 0; i < 10; i++) {
             if (alunos[i] == null) {
                 alunos[i] = aluno;
                 break;
             }
         }
     }
     void listarAlunos() {
         for (int i = 0; i < 10; i++) {
             if (alunos[i] != null) {
                 cout << alunos[i].getNome() << " - " << alunos[i].getRa() << endl;
             }
         }
     }
}