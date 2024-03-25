#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    string nome1 = "Joao";
    string nome2("Maria");

    cout << nome1 << endl;
    cout << nome2 << endl;

    cout << "Size: " << nome1.size() << endl;
    cout << "Length: " << nome1.length() << endl;
    cout << "Capacity: " << nome1.capacity() << endl;
    cout << "Max size: " << nome1.max_size() << endl;

    
}