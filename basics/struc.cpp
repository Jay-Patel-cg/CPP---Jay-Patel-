#include <iostream>
#include <string>

using namespace std;

struct Student{
    int ID;
    string name;
    int roll_num;
}; 

struct Employee{
    int UID;
    string names;
    int salary;
};


int main(){
     
    // Student stud[2];

    // for(int i = 0; i<2; i++){
    //     cout << "Enter Your ID: " << endl;
    //     cin >> stud[i].ID;

    //     cout << "First Name: " << endl;
    //     cin >> stud[i].name;

    //     cout << "Roll number: " << endl;
    //     cin >> stud[i].roll_num;
    // }

    // for(int i=0; i<2; i++){
    //     cout << "Given Student data are: " << stud[i].ID << " " << stud[i].name << " " << stud[i].roll_num << endl;
    // }


    Employee emp[5];

    for(int i=0; i<5; i++){
        cout << "Enter UID: "<< endl;
        cin >> emp[i].UID;

        cout << "Enter name: "<< endl;
        cin >> emp[i].names;

        cout << "Enter Salary: "<< endl;
        cin >> emp[i].salary;
    }

    for(int i=0; i<5; i++){
        cout << "Data : " << emp[i].UID << " " << emp[i].names << " " << emp[i].salary << endl;
    }

    return 0;
}
