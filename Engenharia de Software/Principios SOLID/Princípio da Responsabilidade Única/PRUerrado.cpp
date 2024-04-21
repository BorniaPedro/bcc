#include <iostream>
#include <string>
using namespace std;

class Turma{
    private:
     float taxaAprovacao;
    public:
     void calculaAprovacao(int aprovados, int totalAlunos){
         taxaAprovacao = (aprovados / totalAlunos) * 100;  
         cout << "Taxa de Aprovacao: " << taxaAprovacao << "%" << endl;
     }
}

int main(){
    Turma t1;
    t1.calculaAprovacao(10, 100);
    return 0;
}



