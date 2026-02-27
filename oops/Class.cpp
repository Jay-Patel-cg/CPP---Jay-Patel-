// #include <iostream>
// #include <string>

// using namespace std;

// // It is a class only no object is created till now.......
// class Car {

//     // to access the any member from anywhere........
//     public:

//         string compny_name;
//         int mil;
//         string engine;


//         void print(){
//             cout << "The print function is defined inside car Class" << endl;
//             cout << "Company name is  : " << this->compny_name <<endl;
//         }
// };


// int main(){

//     cout << "Now creating the actule object of class  -> car" << endl;

//     // object declare karne ka tarika.......

//     Car c1;

//     c1.compny_name = "RR";
//     c1.mil = 10;
//     c1.engine = "V8";

//     cout << "The data has been inserted succesfully" << endl;

//     c1.display();

//     return 0;
// }


// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
// it is a class only no object is created till now
class Car {
    // to access the any members from anywhere....
    public:
    string comp_name;
    int mileage;
    string engine;
    
    
    void display(){
        cout << "The print function is defined inside Car class: " << endl;
        cout << "Company name is : " << this->comp_name << endl;
    }
};

int main() {
    
cout << "Now creating the actual object of class -> Car" << endl;

//object declare karnr ka tarika.......

Car c1;

c1.comp_name = "TVS";
c1.mileage = 45;
c1.engine = "V8";

cout << "The data is an been inserted successfully ...." << endl;

c1.display();

cout << "The function is called: " << endl;

    return 0;
}


// // make 4 classs and use 2 of them -> Assignment

