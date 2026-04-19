
//              -> This is Constructor (Without Parameterized)


// #include <iostream>
// using namespace std;


// class Base{
//     public:
//     Base(){
//         cout<< "This is Base Constructor " << endl;
//     }
// };

// class Child : public Base {
//     public:
//     Child(){
//         cout << "This is Child Constructor " << endl;
//     }
// };

// //  Base always initializes First 

// int main(){
    
//   Child c;
    
//     return 0;
// }





//              ->  This is Parameterized Constructor in Inheritance




// #include <iostream>
// using namespace std;

// class Base{
//     public:
//     Base(int x){
//         cout << x << endl;
//     }
// };

// class Child : public Base{
//     public:
//     Child(int y) : Base(y) {} 
// };



// int main(){
    
//   Child c(100);
    
//     return 0;    
// }



//              -> This is Destructor Behavior in Inheritance


// #include <iostream>
// using namespace std;


// class Base{
//     public:
//     ~Base(){
//         cout << "This is Base Destructor " << endl;
//     }
// };

// class Child : public Base{
//     public:
//     ~Child(){
//         cout << "This is Child Destructor " << endl;
//     }
// };


// int main(){
    
//   Child c;  
    
//     return 0;
// }



//          -> This is Virtual Destructor (Very Important)(chat gpt write this imp thing not me)


// #include  <iostream>
// using namespace std;

// class Base{
//     public:
//     virtual ~Base(){
//         cout << "This is Base Destructor " << endl;
//     }
// };


// class Child : public Base {
//     public:
//     virtual ~Child(){
//         cout << "This is Child Destructor " << endl;
//     }
// };


// int main(){
  
//   Base *obj = new Child();
//   delete obj;
    
    
//     return 0;
// }
