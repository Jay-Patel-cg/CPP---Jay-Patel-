
//  Main masala is niche

// // #include<iostream>
// // #include<string>
// // using namespace std;

// // class BankAccount{
// //     private:
    
// //     //   Data members....
// //        int balance = 0;
       
       
// //     protected:
    
// //     //Data member...
// //        string name;
       
// //     public:
       
// //     // Constructor...
// //        BankAccount(int bal , string name){
// //            if(bal > 0){
// //                balance += bal;
// //                this->name = name;
// //                cout << "The particular amount got added in your existed balance." <<endl;
// //            }
// //            else{
// //                cout << "The amount must be greater than zero" << endl;
// //            }
// //        }
       
// //        friend void display(BankAccount& person);
       
// // };

// // void display(BankAccount& person){
// //     cout << "The total balance of a particular person is:-> " << person.balance << endl;
// //     cout <<"The account holder name of that account is: ->" << person.name << endl;
// // }

// // int main(){
    
// //     BankAccount p1(3446, "Samir singh"), p2(785, "Prince"),p3(-3534, "Priyank");
    
// //     display(p2);
    
// //     return 0;
// // }





// //     Taskk -> friend keyword somthing like rectangle and triangel type


// // #include<iostream>

// // using namespace std;

// // class Rectangle;

// // class Triangle{
    
// //     private:
    
// //        int width, height;
       
// //     public:
    
// //        Triangle(int width, int height){
// //            this->width = width;
// //            this->height = height;
// //            cout << "The data is intialized inside Triangle data members" << endl;
// //        }
       
// //        friend void calculate(Triangle& t1, Rectangle& R1);
    
// // };

// // class Rectangle{
    
    
// //     private:
    
// //        int width, height;
       
// //     public:
    
// //        Rectangle(int width, int height){
// //            this->width = width;
// //            this->height = height;
// //            cout << "The data is intialized inside a rectangle data members" << endl;
// //        }
       
// //        friend void calculate(Triangle& t1, Rectangle& R1);

// // };

// // void calculate(Triangle& t1, Rectangle& R1){
// //     cout << "The value of width in Triangle is: ->" << t1.width;
// //     cout << "The value of width in Rectangle is: ->" << R1.width;
    
// // }

// // int main(){
    
// //     Triangle T1(34, 56);
// //     Rectangle R1(56, 89);
    
// //     calculate(T1, R1);
// //     return 0;
// // }


// // Another example


// #include<iostream>

// using namespace std;

// class Rectangle;

// class Triangle{
    
//     private:
    
//        int width, height;
       
//     public:
    
//        Triangle(int width, int height){
//            this->width = width;
//            this->height = height;
//            cout << "The data is intialized inside Triangle data members" << endl;
//        }
       
//        friend void calculate(Triangle& t1, Rectangle& R1);
    
// };

// class Rectangle{
    
    
//     private:
    
//        int width, height;
       
//     public:
    
//        Rectangle(int width, int height){
//            this->width = width;
//            this->height = height;
//            cout << "The data is intialized inside a rectangle data members" << endl;
//        }
       
//        friend void calculate(Triangle& t1, Rectangle& R1);
       
//        friend class Child2;

// };

// class Child2{
    
//     public:
    
//       Child2(Rectangle& r1){
//           cout << "The value of width in Rectangle is: ->" << r1.width;
//       }
// };



// void calculate(Triangle& t1, Rectangle& R1){
//     cout << "The value of width in Triangle is: ->" << t1.width;
//     cout << "The value of width in Rectangle is: ->" << R1.width;
    
// }

// int main(){
    
//     // Triangle T1(34, 56);
//     // Rectangle R1(56, 89);
    
//     // calculate(T1, R1);
    
//     Rectangle r1(56, 78);
//     Child2 c1(r1);
//     return        0;
// }









// ///////////////////////////////////////////////////////////////////////////////////////


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




//          -> This is (Multiple Classes) Friend 



// #include <iostream>
// using namespace std;

// class B;

// class A{
//     private:
//     int x;
    
//     public:
//     A(int v) : x(v) {}
    
//     friend void Add(A , B);
// };

// class B{
//     private:
//     int y;
    
//     public:
//     B(int v) : y(v) {}
    
//     friend void Add(A , B);
// };

// void Add(A a, B b){
//     cout << a.x + b.y << endl;
// };


// int main(){
    
//   A obj1(10);
//   B obj2(20);
  
//   Add(obj1, obj2);
    
//     return 0;
// }



//             -> This is Friend Classes 



// #include <iostream>
// using namespace std;


// class Engine{
//     private:
//     int power;
    
//     public:
//     Engine(int p) : power(p) {}
    
//     friend class Car;
// };

// class Car{
//     public:
//     void show(Engine e){
//         cout << e.power << endl;
//     }
// };


// int main(){
    
//   Engine e(150);
//   Car c;
//   c.show(e);
    
//     return 0;
// }
