class No 
{
    public:
     No* ant;
     int dado;
     No* prox;

    No(){}
    No(int dado) {this-> dado;}
    No(No* ant, int dado, No* prox){
        this-> ant = ant;
        this-> dado = dado;
        this-> prox = prox;
    }
}