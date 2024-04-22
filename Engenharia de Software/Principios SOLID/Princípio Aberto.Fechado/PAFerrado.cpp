#include <iostream>
#include <string>
using namespace std;

class Animal {
    private:
        string animal;
    public:
     void makeSound() {
        if(animal == "Cachorro"){
            cout << "Au-Au" << endl;
        } else if(animal == "Gato"){
            cout << "Miau" << endl;
        }
     }
};

int main(){
    Animal cachorro1;
    cachorro1.makeSound();
    return 0;
}