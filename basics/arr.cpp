#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

enum word{
    LOW,
    MEDIUM,
    HIGH

};

int main() {
    // int x = 5;
    // cout << "Value of x: " << x << endl;  // Print the value of x

    // int y = 15;
    // cout << "Value of y: " << y << endl;  // Print the value of y

    // int product = x * y;
    // cout << "Product of x and y: " << product << endl;  // Print the product of x and y

    // int your_favorite_number = 42; // Example favorite number
    // cout << "Your favorite number: " << your_favorite_number << endl;  // Print favorite number

    // for(int i = 0; i < 5; i++) {
    //     cout << "Iteration " << i + 1 << ": " << (your_favorite_number + i) << endl; // Print favorite number plus iteration index
    // }

    // int arr[5]={1, 2, 3, 4, 5};
    // cout << "Array elements: " << endl;
    // for(int i = 0; i < 5; i++) {
    //     cout << "current index of value: " << i << " -> " << arr[i] << endl;
    // }
    // cout << endl;   

    // cout << "Size of the array: "<<sizeof(arr)<<" bytes"<<endl;

    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;


    enum word a1 = LOW;
    enum word a2 = MEDIUM;
    enum word a3 = HIGH;

    cout << "THe Vlaue returned by a1 is: " << a2 <<endl;

    switch(a3){
        case 0: cout<< "The case0 is executed" << endl;
        break;
        case 1: cout << "The Case1 is executed"<< endl;
        default: cout << "The defult value is executed for a3" << endl;
    }


    return 0;
}