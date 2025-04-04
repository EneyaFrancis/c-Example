#include <iostream>
using namespace std;

int main(){

    //null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign address of first element to pointer
    pPointer = numbersArray;

    //output the address to the first element
    pPointer = numbersArray;

    //output address of the first element
    cout << "Address to pPointer: "<< pPointer << endl;
    cout << "Address of numberArray[0]: "<< numbersArray << endl;

    //output the value of the first element using pointer and indirection
    cout << "Value at pPointer:  "<< *pPointer << endl;

    //This outputs the value of the second element
    cout << "Value at ++pPointer "<< *(++pPointer) << endl;

    //assign address of first element to pointer
    pPointer = numbersArray;

    //This outputs the value of the first element
    cout << "Address to pPointer: "<< pPointer << endl;

    //This outputs the value of the first element 
    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
}