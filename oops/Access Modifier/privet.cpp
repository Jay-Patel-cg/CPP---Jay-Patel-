#include <iostream>
#include <string>

using namespace std;

class BankAccount{


    public:
        string UserName;

    private:               // -> Within that Particluar class -> Not outside the class -> main(), userDefined funcction, -> children class ( X )No access
    int bankBalence;

    public:

    BankAccount(string name , int balance){
        UserName = name;
        bankBalence = balance;
    };

    void displayUserDetails(){
        cout << "Account Holder name is :-> " << this->UserName << endl;
        cout << "Current balance is :-> " << this->bankBalence << endl;
    }

};

// -> You can not Even Use that privet in your child classs

// class Child : public BankAccount{
    
//     public:

//         void display1(){
//             cout << " Current BankBalance is :-> " << bankBalence << endl;
//         }


// }

int main(){

    BankAccount p1("Jay Patel" , 999999999);
    p1.displayUserDetails();

    BankAccount p2("Samir Fuddi" , 69696969);
    p2.displayUserDetails();



    // p1.UserName = "Jay";
    // cout << " Name is : " << p1.UserName << endl;

    // p1.bankBalence = 9999999999;
    // cout << "Bank balence is  : " << p1.bankBalence << endl;


    return 0;
}