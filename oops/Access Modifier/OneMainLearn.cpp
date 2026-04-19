
//   ->  This is protected Keyword In Class (Allow child classes to access/modify data , Prevent direct access from outside)


// #include <iostream>
// using namespace std;

// class Student{
//     protected:
//     int marks;
    
//     public:
//     void showMarks(int m){
//         marks = m;
//     }
// };

// class Data : public Student{
//     public:
//     void  Show(){
//         cout << "This are Marks of Student " <<  marks << endl;
//     }
// };

// int main()
// {

//   Data std;
//   std.showMarks(100);
//   std.Show();

//     return 0;
// }






//              -> Protected Members and Access in Inheritance





// #include <iostream>
// using namespace std;


// class Student{
    
//     protected:
//     int marks ;
    
//     public:
//     Student (int m) {
//         marks = m;
//     }
// };

// class Faculty : public Student {
//     public:
//     Faculty (int m) : Student(m) {}
    
//     void Update(int m){
//         marks = m;
//     }
// };

// class StudentView : public Student {
//     public : 
//     StudentView (int m) : Student(m) {}
    
//     void show(){
//         cout << marks << endl;
//     }
// };


// int main(){
    
//     Faculty put(50);
//     put.Update(80);
    
//     StudentView view(80);
    
//     view.show();
    
    
    
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
