#include <iostream>
using namespace std;

int main(){
    int numberArray[5];

    int * pPointer = nullptr;

    //assign the address of the first element to the pointer
    pPointer = numberArray;
    *pPointer = 10; //assign value to the first element

    /*increament the pointer using arithmetic to assign the address of the 
    second element to the pointer*/
    pPointer++;
    *pPointer = 20; //assign value to the second element of the pointer

   /*This code has been deleted ...
   mbkve;envlwmv;l
   askcnkladvlbdlvbdlcvn
   vowuvbwbvwbnvbw
   bjqeqvlwblvblwrv*/


    /*assign the address of the fourth element to the pointer using
    pointer arithmetic */
    pPointer = numberArray + 3;
    *pPointer = 40; //assign value to the fourth element

    //assign address to te first element to the pointer
    pPointer = numberArray;

    /*assign a value to the fifth element using indirection and pointer
    pointer arithmetic*/
    *(pPointer+4) = 50;

    //iterate and output all elements in the array
    for (int n = 0; n < 5; n++){
        cout << numberArray[n]<< " , ";
    }

    return 0;

}