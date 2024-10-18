#include <iostream>
using namespace std;

//Exemplo 1
template <typename T>
void troca(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 5;
    int b = 10;
    troca(a,b);
    cout << a << b << endl;
}

//Exemplo 2