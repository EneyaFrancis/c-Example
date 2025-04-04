#include <iostream>
using namespace std;

int main(){
    int firstvalue;
    int secondvalue;

    int * pPointer = nullptr;

    //assign pointer with the adddress of the first value
    pPointer = &firstvalue;
    *pPointer = 10; //indirection

        //assign pointer with the adddress of the second value
        pPointer = &secondvalue;
        *pPointer = 20; //indirection

        cout << "firstValue is: " << firstvalue << '\n';
        cout << "secondValue is: " << secondvalue << '\n';

        return 0;
}