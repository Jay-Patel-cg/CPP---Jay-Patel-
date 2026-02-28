
//  ambiguous -> resolve

// #include <iostream>
// #include <string>

// using namespace std;

// class parentA{
//     public:
//         string name = "ParentA";
        
//         void display(){
//             cout << "The name of my parent class is : " << this->name << endl;
//         }
// };

// class parentB{
//     public:
//         string name1 = "ParentB";
        
//         void display(){
//             cout << "The name of my parent class is : " << this->name1 << endl;
//         }
// };

// class Children : public parentA, public parentB{
    
//     public:
//         string name2 = "Children";
        
//         // void display(){
//         //     cout << "The name of my Children class is : " << this->name2 << endl;
//         // }
        
//         // when every function name is same so children take first prority of itself 
//         // but now look at main() function this is how we extend diff parents function
// };


// int main()
// {
    
//     Children c1;
    
//     c1.parentB::display();

//     // c1.parrent::function();
//     //  :: -> this is called Scope Resolution

//     return 0;
// }



//  Constrction -> resolve

#include <iostream>
#include <string>

using namespace std;

class parentA{
    public:
        string name ;
        int a ;

        parentA(string name , int a){
            cout << "Hello first 1st" << endl;
            this->name = name;
            this->a = a;
        }

        void display(){
            cout << "The name of my parent class is : " << this->name << endl;
        }
};

class parentB{
    public:
        string name1;
        int a1;

        parentB(string name1 , int a1){
            cout << "Hii Second 2nd" << endl;
            this->name1 = name1;
            this->a1 = a1;
        }
        
        void display(){
            cout << "The name of my parent class is : " << this->name1 << endl;
        }
};

class Children : public parentA, public parentB{
    
    public:
            string name2;
            int a2;

            Children(string name2 , int a2 , string name1 , int a1 , string name , int a):parentA(name , a) , parentB(name1 , a1 ){
                cout << "Final third 3rd" << endl;
                this->name2 = name2;
                this->a2 = a2;
            }
        
        // void display(){
        //     cout << "The name of my Children class is : " << this->name2 << endl;
        // }
        
        // when every function name is same so children take first prority of itself 
        // but now look at main() function this is how we extend diff parents function
};


int main()
{
    
    Children c1("child" , 30 , "ParentB" , 20, "ParentA" , 10);

    cout << endl;
    
    c1.parentA::display();
    c1.parentB::display();

    // c1.parrent::function();
    //  :: -> this is called Scope Resolution

    return 0;
}
