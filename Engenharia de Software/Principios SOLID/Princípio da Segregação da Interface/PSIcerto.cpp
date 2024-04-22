#include <iostream>
#include <string>
using namespace std;

class Automovel{
    public:
     void ligarMotor(); // todos os automóveis possuem motor 
};

class Moto : public Automovel{
    public:
     void empinar();
};

class Carro : public Automovel{
    public:
     void abrirPorta();
};

int main(){
    Carro carro1;
    Moto moto1;

    carro1.ligarMotor();
    carro1.abrirPorta();

    moto1.ligarMotor();
    moto1.empinar();
}