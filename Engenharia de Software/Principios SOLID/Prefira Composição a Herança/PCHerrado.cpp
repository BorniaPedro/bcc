#include <iostream>
#include <string>
using namespace std;

class Aluno {
    private:
     string nome;
     int ra;
    public:
     Aluno* alunos[10];
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
     void adicionarAluno(Aluno aluno) {
         for (int i = 0; i < 10; i++) {
             if (alunos[i] == nullptr) {
                 alunos[i] = aluno;
                 break;
             }
         }
     }
}

class Turma : public Aluno {
    public:
     void listarAlunos() {
         for (int i = 0; i < 10; i++) {
             if (alunos[i] != nullptr) {
                 cout << alunos[i]->getNome() << " - " << alunos[i]->getRa() << endl;
             }
         }
     }
}