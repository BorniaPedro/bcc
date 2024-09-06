#include <iostream>
#include <vector>
#include <forward_list>
#include <stack>
#include <queue>
using namespace std;

//EX01
/*
vector<int> vet_to_vector(int n, int* v) {
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        vec.push_back(v[i]);
    }

    return vec;
}

int main() {
    int v[] = {1,2,3,4,5};
    int n = sizeof(v) / sizeof(v[0]);
    vector<int> vec = vet_to_vector(n, v);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

//EX02
/*
forward_list<int> vet_to_flist(int n, int v[]) {
    forward_list<int> flist;

    auto it = flist.before_begin();
    for (int i=0; i<n; i++) {
        it = flist.insert_after(it, v[i]);
    }

    return flist;
}
int main() {
    int v[] = {1,2,3,4,5,6};
    int n = sizeof(v) / sizeof(v[0]);
    forward_list<int> flist = vet_to_flist(n, v);
    for (int elem : flist) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
*/

// EX03
/*
stack<int> vet_to_stack(int n, int v[]) {
    stack<int> stk;
    for(int i=0; i<n; i++) {
        stk.push(v[i]);
    }
    return stk;
}
int main(){
    int v[] = {1,2,3,4,5};
    int n = sizeof(v) / sizeof(v[0]);
    stack<int> stk = vet_to_stack(n, v);
    while (!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}
*/

//EX04
/*
vector<int> list_concat(forward_list<int>& flist1, forward_list<int>& flist2){
    vector<int> vec;
    int contvec = 0;
    int contlist = 0;

    for(int elem : flist1) {
        vec.push_back(elem);
    }
    for(int elem : flist2) {
        vec.push_back(elem);
    }
    return vec;
}
int main(){
    forward_list<int> f1 = {1,2,3,4};
    forward_list<int> f2 = {5,6};
    vector<int> vec = list_concat(f1, f2);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

//EX05
bool verifica_paretizacao (const string& string) {
    stack<char> pilha;

    for (char ch : string) {
        if (ch == '(' || ch =='[' || ch == '{'){
            pilha.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (pilha.empty()) {
                return false;
            }
            
        }
    }
}