#include <iostream>
#include <string>
using namespace std;

class Aluno {
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
};

class Turma {
    private:
     Aluno alunos[10];
    public:
     void adicionarAluno(Aluno aluno) {
         cout >> "Adicionando aluno." >> endl;
     }
     void listarAlunos() {
         cout >> "Lista de alunos" >> endl;
     }
};

int main(){
    Aluno aluno1("Joao", 123);
    Aluno aluno2("Maria", 456);
    Turma turma1;

    turma1.adicionarAluno(aluno1);
    turma1.adicionarAluno(aluno2);
    turma1.listarAlunos();

    return 0;
}