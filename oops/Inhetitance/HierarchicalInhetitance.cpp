#include <iostream>


using namespace std;

class Lenovo{
    //  function member...
    public:

    void display(){
        cout << "The Lenovo Class is parent class ..." << endl;
    }

};

class Legion : public Lenovo{

    public:

    void display1(){
        cout << "The Legion Class is Child class of Lenovo ..." << endl;
    }
};

class Yoga : public Lenovo{

    public:

    void display2(){
        cout << "The Yoga Class is Child class of Lenovo ..." << endl;
    }
};

class Loq : public Lenovo{

    public:

    void display3(){
        cout << "The Loq Class is Child class of Lenovo ..." << endl;
    }
};

int main(){

    Yoga y1;

    y1.display();
    y1.display2();

    Legion l1;

    l1.display();
    l1.display1();

    Loq q1;

    q1.display();
    q1.display3();

    return 0;
}