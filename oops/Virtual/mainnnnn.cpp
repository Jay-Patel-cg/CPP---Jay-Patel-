//          -> This is Pure Virtual Functions



// #include <iostream>
// using namespace std;

// class Base{
//     public:
//     virtual void show(){
//         cout << "This is Base " << endl;
//     }
// };

// class Child : public Base {
//     public:
//     void show() override {
//         cout << "This is Child " << endl;
//     }
// };


// int main(){
  
//   Base* ptr;
//   Child c;
  
//   ptr = &c;
//   ptr->show();
  
    
    
//     return 0;
// }



//               -> This is Pure Virtual Functions


// #include <iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual void draw() = 0;  // Pure Virtual Function
// };

// class Circle : public Shape{
//     public:
//     void draw() override {
//         cout << "This is circle " << endl;
//     }
// };


// int main(){
    
//   Shape* s = new Circle;
//   s -> draw();
    
//     return 0;
// }



//             -> This is Virtual Destructor



// #include <iostream>
// using namespace std;

// class Base{
//     public:
//     virtual ~Base(){
//         cout << "This is Base " << endl;
//     }
// };

// class Child : public Base{
//     public:
//     ~Child(){
//         cout << "This is child " << endl;
//     }
// };


// int main(){
  
//   Base* b = new Child();
//   delete b;
    
//     return 0;
// }




//              -> This is Friend Functions




// #include <iostream>
// using namespace std;

// class Box{
//     private:
//     int width;
    
//     public:
//     Box(int w) : width(w) {}
    
//     friend void printWidth(Box b);
// };

// void printWidth(Box b){
//     cout << b.width << endl;
// };


// int main(){
    
//     Box obj(100);
//     printWidth(obj);
    
    
//     return 0;
// }