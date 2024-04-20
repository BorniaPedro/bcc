#include <iostream>
#include <string>
using namespace std;

class Turma{
    private:
     float taxaAprovacao;
    public:
     void calculaAprovacao(int aprovados, int totalAlunos){
         taxaAprovacao = (aprovados / totalAlunos) * 100;  
     }
}

class Console{
    public:
     void imprimeTaxaAprovacao(Turma t){
        cout << "Taxa de Aprovacao: " << t.taxaAprovacao << "%" << endl;
     }
}

int main(){
    Turma t1;
    t1.calculaAprovacao(10, 100);
    Console c;
    c.imprimeTaxaAprovacao(t1);
    return 0;
}


