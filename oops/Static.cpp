

//  Static belongs to a perticlular class not an object 
//  You can not access it by object 
//  You can acces those mamber by Scope Resulation ( :: );
//  In a object those data which are same in all object so you can use static 
//  Like exmplee in CodingGita student data total 120 student in there detail organization name is Static you can use static there Like static organization = CodingGuta.........


//  My hand writtennnnnnnnnnnnnnnnn codeeee


#include <iostream>
#include <string>

using namespace std;

class CodingGita{

  public:

      // Data member..... 
    string sName;
    static string organization; // -> now you add static keyword now you have to define this line out of this class you have to give value to it outside of this class
    int roll;
    static int tStudent;// -> now you add static keyword now you have to define this line out of this class you have to give value to it outside of this class


    // Constructorrr.....

    CodingGita(string name, int rn){
      sName = name;
      roll = rn;
      ++tStudent;
    };

    // Function member......

    void display(){
      cout << "Student name is :-> " << this->sName << endl;
      cout << "Student Roll Num is :-> " << this->roll << endl;
      cout << "Student Total :-> " << this->tStudent << endl;
      cout << "Oraganization name is :-> " << this->organization << endl;
    };

};

string CodingGita::organization = "CodingGita";
int CodingGita::tStudent = 0;


int main(){

  CodingGita s1("Jay" , 725);
  s1.display();

  CodingGita s2("Samir" , 726);
  s2.display();

  CodingGita s3("Arora", 143);
  s3.display();

  return 0;
}




// // #include <iostream>

// // using namespace std;

// // //  virtual keyword is use for the class


// // class CountObject{

// //     // Data member....

// //     public:
    
// //     static int count;

// //     //  static keyword is use for any member(Data or Function for Both) 

// //     CountObject(){
// //         ++count;
// //     }

// //     ~CountObject(){
// //         --count;
// //     }

// //     void displayCount(){
// //         cout << "The total object created is :-> " << count << endl;
// //     }
    
// // };

// // int CountObject::count = 0;  // ->  we can also use this in int, flote , double and otherr

// // void createObj(){

// //     CountObject c4, c5, c6, c7;

// //     c7.displayCount();

// // }

// // int main(){

// //     CountObject c1 ,c2 ,c3;

// //     c3.displayCount();

// //     createObj();

// //     c2.displayCount();

// //     return 0;
// // }



// #include<iostream>
// #include<string>

// using namespace std;

// class CreateObj{
  
//   public:
  
//     //  Data member.... but with static keyword
    
//       static int count;
//       static float num;
//       static string name;
      
//     // constructor....
    
//       CreateObj(){
//           ++count;
//           cout << "The count is incremented to trace the number of objects.." << endl;
//       }
      
//     // Function members...
    
//       void display(){
//           cout << "Total numbers of object created for this class is ->" << CreateObj::count << endl;
//           cout << "The static name of this class is:" << CreateObj::name << endl;
//       }
      
//     // Destrucotr to trace those objects which are going to destroy....
//       ~CreateObj(){
//           --count;
//           cout << "The current object is about to get destroyed through c++ compiler" << endl;
//       }    
// };

// // It is use to intialize the staic data members value....

// int CreateObj :: count = 0;
// float CreateObj :: num = 56.7;
// string CreateObj :: name = "Samir";

// void create(){
//     cout << "Total 5 object will be created.." << endl;
//     CreateObj obj4;
//     obj4.display();
    
//     CreateObj obj5;
//     obj5.display();
    
//     CreateObj obj6;
//     obj6.display();
    
//     CreateObj obj7;
//     obj7.display();
    
//     CreateObj obj8;
//     obj8.display();

//     cout <<"All object which is created is about to get destroyed becauise of its life scope" << endl;
// }

// int main(){
    
//     cout << "The object will start creating from this point" << endl;
    
//     CreateObj obj1;
//     obj1.display();
    
//     cout << "Another object is created..." << endl;
//     CreateObj obj2;
//     obj2.display();
    
//     cout << "Another object is created..." << endl;
//     CreateObj obj3;
//     obj3.display();

//     cout << "Function is called to create extra objects.." << endl;
//     create();
    
    
//     obj2.display();
//     return 0;
// }


//  Final C++ non-static and Static Code


// #include<iostream>
// #include<string>

// using namespace std;

// class CreateObj{
  
//   public:
  
//     //  Data member.... but with static keyword
    
//       static int count;
//       static float num;
//       static string name;
//       int data = 0;
      
//     // constructor....
    
//       CreateObj(int data){
//           ++count;
//           this->data = data;
//           cout << "The count is incremented to trace the number of objects.." << endl;
//       }
      
//     // Function members it is non-static...
    
//       void display(){
//         //   cout << "Total numbers of object created for this class is ->" << CreateObj::count << endl;
//         //   cout << "The static name of this class is:" << CreateObj::name << endl;
//           cout << "The non satic data members is: " << this->data << endl;
//       }
      
//     // Function member but it is static...
    
//       static void display1(CreateObj& obj){
//           cout <<"The display1 fucntion is a static fucntion belongs to a class not to an object" << endl;
//           obj.display();
//       }
      
//     // Destrucotr to trace those objects which are going to destroy....
//       ~CreateObj(){
//           --count;
//           cout << "The current object is about to get destroyed through c++ compiler" << endl;
//       }    
// };

// // It is use to intialize the staic data members value....

// int CreateObj :: count = 0;
// float CreateObj :: num = 56.7;
// string CreateObj :: name = "Samir";

// void create(){
//     cout << "Total 5 object will be created.." << endl;
//     CreateObj obj4(4);
//     // obj4.display();
    
//     CreateObj obj5(5);
//     // obj5.display();
    
//     CreateObj obj6(6);
//     // obj6.display();
    
//     CreateObj::display1(obj6);
    
//     // CreateObj obj7;
//     // obj7.display();
    
//     // CreateObj obj8;
//     // obj8.display();

//     cout <<"All object which is created is about to get destroyed becauise of its life scope" << endl;
// }

// int main(){
    
//     // cout << "The object will start creating from this point" << endl;
    
//     // CreateObj obj1;
//     // obj1.display();
    
//     // cout << "Another object is created..." << endl;
//     // CreateObj obj2;
//     // obj2.display();
    
//     // cout << "Another object is created..." << endl;
//     // CreateObj obj3;
//     // obj3.display();

//     // cout << "Function is called to create extra objects.." << endl;
//     create();
    
//     // obj2.display();

//     return 0;
// }






// //  My hand writtennnnnnnnnnnnnnnnn codeeee


// #include <iostream>
// #include <string>

// using namespace std;

// class CodingGita{

//   public:

//       // Data member..... 
//     string sName;
//     static string organization; // -> now you add static keyword now you have to define this line out of this class you have to give value to it outside of this class
//     int roll;
//     static int tStudent;// -> now you add static keyword now you have to define this line out of this class you have to give value to it outside of this class


//     // Constructorrr.....

//     CodingGita(string name, int rn){
//       sName = name;
//       roll = rn;
//       ++tStudent;
//     };

//     // Function member......

//     void display(){
//       cout << "Student name is :-> " << this->sName << endl;
//       cout << "Student Roll Num is :-> " << this->roll << endl;
//       cout << "Student Total :-> " << this->tStudent << endl;
//       cout << "Oraganization name is :-> " << this->organization << endl;
//     };

// };

// string CodingGita::organization = "CodingGita";
// int CodingGita::tStudent = 0;


// int main(){

//   CodingGita s1("Jay" , 725);
//   s1.display();

//   CodingGita s2("Samir" , 726);
//   s2.display();

//   CodingGita s3("Arora", 143);
//   s3.display();

//   return 0;
// }