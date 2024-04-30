#include<iostream>
#include<string>
#include "class.h"
using namespace std;

int main(){
	Vetor v1;      // []
	
	v1.push_back(10);  // [10]
	v1.push_back(20);  // [10,20]
	v1.push_back(30);  // [10,20,30]
	v1.push_back(40);  // [10,20,30,40]
	v1.push_back(50);  // [10,20,30,40,50]

    v1.push_front(12);
    
    v1.print();
	
	// v1.erase(2);         // [10,20,40,50]
	// v1.insert(2, 25);    // [10,20,25,40,50]
	// v1.replace(3, 30);   // [10,20,25,30,50]
	
	// v1.clear();           // []	
}