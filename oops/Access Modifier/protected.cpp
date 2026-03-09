//  Protected is amolst like privet but in this we can use that protected in child classs

//  -> Within that class and it's Child(derived) Class access it but not outside the Particular class And Child(derived)...


#include <iostream>
#include <string>

using namespace std;

class BankAccount{

    public:
    string userName;

    protected:
    int bankBalence;

    public: 

    BankAccount(string name, int balance){
        userName = name;
        bankBalence = balance;
    }

    void displayUserDetails(){
        cout << "Name is : " << this->userName << endl;
        cout << "Balance is : " << this->bankBalence << endl;
    }

};

class Child : public BankAccount{

    public:

        Child(string name , int balance):BankAccount(name, balance){}

        void display1(){
            cout << "User naem is : " << userName << endl;
            
            cout << "User balance is : " << bankBalence << endl;
        }

};



int main(){

    Child c1("Jay Patel", 999999999);
    c1.display1();
    
    Child c2("Harsil Patel" , 69696969);
    c2.display1();
    
    
    
    // cout << "UserName is " << c1.userName << endl;
    // cout << "Balance is" << c1.bankBalence << endl;


    // c1.displayUserDetails();

    return 0;
}