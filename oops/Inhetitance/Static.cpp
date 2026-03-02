#include <iostream>

using namespace std;

//  virtual keyword is use for the class


class CountObject{

    // Data member....

    public:
    
    static int count;

    CountObject(){
        ++count;
    }

    ~CountObject(){
        --count;
    }

    void displayCount(){
        cout << "The total object created is :-> " << count << endl;
    }
    
};

int CountObject::count = 0;  // ->  we can also use this in int, flote , double and otherr

void createObj(){

    CountObject c4, c5, c6, c7;

    c7.displayCount();

}

int main(){

    CountObject c1 ,c2 ,c3;

    c3.displayCount();

    createObj();

    c2.displayCount();

    return 0;
}