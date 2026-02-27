#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

enum word{
    LOW,
    MEDIUM,
    HIGH

};

int main() {

    // enum word a1 = LOW;
    // enum word a2 = MEDIUM;
    // enum word a3 = HIGH;

    // cout << "THe Vlaue returned by a1 is: " << a2 <<endl;

    // switch(a3){
    //     case 0: cout<< "The case0 is executed" << endl;
    //     break;
    //     case 1: cout << "The Case1 is executed"<< endl;
    //     default: cout << "The defult value is executed for a3" << endl;
    // }


    int a = 10;
    int* ptr = &a;
    int** ptr1 = &ptr;

    // cout<< "The Address of the targeted varaible a is using original variable: " << &a <<endl;
    // cout << "The Address of the targeted variable a is using pointer: " << ptr << endl;
    // cout << "The Acutal Value in original variable a is: " << *ptr << endl;

    cout << "The actual address of ptr is: " << &ptr << endl;
    cout << "The acutal address of ptr but by using ptr1 is: " << ptr1 << endl;
    cout << "The original value of targeted value id: " << **ptr1 << endl;

    **ptr1 = 67;

    cout << "The new Value is: " << a << endl;
 
    // int* hello;lj
    // cout << hello << endl; 


    return 0;
}