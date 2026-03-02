#include <iostream>

using namespace std;

class ParentA{

    public:

    void displayA(){
        cout << "Parent A" << endl;
    }

};

class ChildA : public ParentA {

    public:

    void displayB(){
        cout << "ChildA" << endl;
    }

};


class ChildB : public ParentA{

    public:

    void displayC(){
        cout << "ChildB" << endl;
    }

};

class childC : public ChildA , public ChildB{

    public:

    void displayD(){
        cout << "ChildC" << endl;
    }

};


int main(){

    childC c1;

    c1.ChildA::displayA();



    return 0;
}