#include <iostream>
#include <string>
using namespace std;

class Automovel{
    public:
     void ligarMotor(); // todos os automóveis possuem motor 
}

class Carro extends Automovel{
    public:
     void abrirPorta();
};

class Moto extends Automovel{
    public:
     void empinar();
};

int main(){
    Carro carro1;
    Moto moto1;

    carro1.ligarMotor();
    carro1.abrirPorta();

    moto1.ligarMotor();
    moto1.empinar();
}