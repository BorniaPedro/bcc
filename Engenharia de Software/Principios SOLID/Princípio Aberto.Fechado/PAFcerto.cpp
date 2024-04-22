#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
     void makeSound() const = 0;
};

class Cachorro : public Animal{
    public:
     void makeSound() const override{
         cout << "Au-Au" << endl;
     }
};

class Gato : public Animal{
    public:
     void makeSound() const override{
         cout << "Miau" << endl;
     }
};

int main(){
    Cachorro cachorro1;
    Gato gato2;

    cachorro1.makeSound();
    gato2.makeSound();

    return 0;
}