#include <iostream>
#include <string>

using namespace std;

class Student{

    public : 

        string name;
        string gender;
        int age;

        //  Constructer

        Student(string name1 , string gender1 , int age1){
            
            cout << "Intializing the value in the reqired data member belong to class" << endl; 

            name = name1;
            gender = gender1;
            age = age1;
        }

        void display(){

            cout << "The data which is intializes are : " << this-> name << " " << this->gender << " " << this->age << endl;

        }
};


int main(){

    Student s1("Jay Patel" , "Male" , 18);
    s1.display();

    Student s2("Amit Patel" , "Male" , 39);
    s2.display();


    return 0;
}