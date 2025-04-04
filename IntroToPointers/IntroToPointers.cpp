#include <iostream>
using namespace std;

int main(){
    //declare pointer and initialize it
    //so it doesnt store a random address
    int* pPointer = nullptr;

    int integerVar = 5;

    //assign pointer to address of object
    pPointer = &integerVar;

    //output te value of intergerVar
    cout << "intergerVar: "<< integerVar << endl;

    //output address of intergerVar
    cout << "address of integerVar: "<< &integerVar << endl;

    //output the address assigned to pPointer
    cout << "pPointer: " << pPointer << endl;

    //output of address of pPointer
    cout << "Address of pPointer: " << &pPointer << endl;
}
