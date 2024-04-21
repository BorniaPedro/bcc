#include <iostream>
#include <string>
using namespace std;

class Automovel{
    public:
     void ligarMotor(); // todos os automóveis possuem motor

     void abrirPorta(); // apenas carros possuem portas

     void empinar(); // apenas motos empinam
}

int main(){
    Automovel carro1;
    Automovel moto1;

    carro1.ligarMotor();
    carro1.abrirPorta();

    moto1.ligarMotor();
    moto1.empinar();
}