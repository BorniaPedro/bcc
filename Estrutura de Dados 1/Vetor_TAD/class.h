#include<iostream>
#include<string>
using namespace std;

class Vetor{

    private:
        int* array;
        int capacity;
        int v_size;

    public:
        Vetor(){
            capacity = 10;
            array = new int[capacity];
            v_size = 0;
        }
        ~Vetor(){
            delete[] array;
        }

        // Insere o elemento e na última posição
        bool push_back(int e){
            array[v_size] = e;
            v_size++;
            return true;
        }
        // Insere o elemento e na primeira posição
        bool push_front(int e){
            for(int i=v_size-1; i>=0; i--){
                array[i+1] = array[i];
            }
            array[0] = e;
            v_size++;
            return true;
        }
        // Insere o elemento e na posição pos
        bool insert(int pos, int e){
            for(int i=v_size; i>=pos; i--){
                array[i+1] = array [i];
            }
            array[pos] = e;
            v_size++;
            return true;
        }

        // Remove o último elemento
        int pop_back();
        // Remove o primeiro elemento
        int pop_front();
        // Remove o elemento da posição pos e retorna o elemento removido
        int erase(int pos);


        // Retorna o primeiro elemento
        int front();
        // Retorna o último elemento
        int back();
        // Retorna o elemento da posição pos
        int at(int pos);

        // Torna a lista vazia
        void clear();

        // Verifica se o vetor está vazio
        bool empty();
        // Devolve a quantidade de elementos
        int size();
        // Substitui o elemento da posição pos pelo elemento e
        bool replace(int pos, int e);

        // Imprime todos os elementos no formato [1,2,3]
        void print(){
            for(int i=0; i<v_size; i++){
                cout << array[i] << " ";
            }
            cout << "" << endl;
        }

    private:
	    // Dobrar a capacidade quando não houver mais espaço
	    // Reduzir a capacidade pela metade quando for inferior a 25% de ocupação
        void gerenciaCapacidade();        
};