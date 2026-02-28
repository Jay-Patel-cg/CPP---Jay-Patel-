#include <iostream>
#include <string>

using namespace std;

void fileOperation(int a , int b, double result , string oper){
    
    cout << "THe write opration is initiated..." << endl;

    ofstream file;
    file.open("Practice,txt" , ios::app);

    if(file.is_open()){

        
        
    }

};


class Addition{

    public:

    void add(int a , int b){
        cout << "Addition" << a + b << endl;
    }
};

class Subtraction{

    public:

    void Sub(int a , int b){
        cout << "Sub : " << a - b << endl;
    }

};



class Multiplication{

    public : 

    void multi(int a , int b){
        cout << "Multi : " << a * b << endl;
    }

};

class Divison{

    public : 

    void div(int a , int b){
        cout << "div: " << a / b << endl; 
    }

};

class Cal: public Addition, public Subtraction , public Multiplication , public Divison{

        cout << "Clacccc " < endl;
};



int main(){

    cout << "Hello" << endl;

    return 0;
}