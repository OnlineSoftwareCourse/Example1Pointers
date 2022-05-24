
#include <iostream>
using namespace std;

int main()
{
    //declarations and assignment of address
    int var1 = 20; //declaration of variable
    int* intptr; //declaration of pointer variable

    intptr = &var1;

    //print the value of var1
    cout << "Value of var1 variable: ";
    cout << var1 << endl;

    //print the address stored in intrptr pointer variable
    cout << "Address stored in intptr variable: ";
    cout << intptr << endl;

    //access the value at the address avaiable in pointer
    cout << "Value of *intptr variable: ";
    cout << *intptr << endl;

    return 0;

}


