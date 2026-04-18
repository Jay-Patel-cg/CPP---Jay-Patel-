
// //  Task - 01

// //  Stattiv Object Counter Employee class: privet string name , public constructoer increments static int totalEmployees and sets name.
// //  Static getTotal() returns count. Main: create 4 employees , print total = 4

// //  Task - 02

// // Encapsulated Rectangle Class: Write Rectangle class with private double width, height. Public methods: setDimensions(double w, double h) (validate >0),
// // getArea() returns widthheight, getPerimeter() returns 2(w+h). Main: create object, set 5x3, print area=15, perimeter=16.



// //  Task - 01 -> Solution 

// // #include <iostream>
// // #include <string>

// // using namespace std;

// // class Empolyee{

// //     private: 

// //     string name;
// //     static int totalEmployees;

// //     public:
    
// //     Empolyee(string n){
// //         name = n;
// //         totalEmployees++;
// //     }

// //     static int getTotal(){
// //         return totalEmployees;
// //     }

// // };

// // int Empolyee::totalEmployees = 0;

// // int main(){

// //     Empolyee e1("Jay");
// //     Empolyee e2("Jaco");
// //     Empolyee e3("Jayu");
// //     Empolyee e4("Jaylo");

// //     cout << "Total Employee = " << Empolyee::getTotal();



// //     return 0;
// // }


// //  Task - 02 -> Solution


// #include <iostream>
// #include <string>

// using namespace std;

// class Rectangle{

//     private:
//         double height;
//         double width;

//     public:
//         Rectangle(int h , int w){
//             height = h;
//             width = w;
//         }
    
//     void getArea(){
//         cout << "Area of Reactangle is : " << height*width << endl;
//     }

//     void getPeri(){
//         cout << "Perimetetr odf rec is : " << 2*(height + width) << endl;
//     }



// };

// int main(){

//     Rectangle r1(10,5);

//     r1.getArea();
//     r1.getPeri();


//     return 0;
// }

  


//  Task - 03 -> 


// Private Static Member:

// Config class: 

// private static int value=0; 

// static setter setValue(int v), static getter getValue(). 

// Main: Config::setValue(42);
//  cout << Config::getValue() → 42.


//  Solution - 03 -> 

// #include <iostream>
// #include <string>

// using namespace std ;

// class Confing{

//     private:
//         static int value;
    
//     public: 
//         static void setValue(int v){
//             value = v;
//         }

//         static int getValue(){
//             return value;
//         }
// };

// int Confing::value = 0;


// int main(){

//     Confing::setValue(42);
//     cout << Confing::getValue();

//     return 0;
// }



//  Task - 04 -> 

//  Static Function Utility:

// static bool isPalindrome(string s) (ignore case, reverse check). 

// Main: 
// cout << StringUtils::isPalindrome("radar")
//  → 1 (true).



//  Task - 04 -> Solution


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// class Palindrome{
//     public: 

//     static bool isPalindrome(string word){
//         int j = word.size()-1;
//         int i = 0;
//         while(i<j){
//             if(tolower(word[i]) == tolower(word[j]) ) {
//                 i++;
//                 j--;
//                 continue;
//             }
//             else return false;
            
//         }
//         return true;
//     }
// };

class Utils{
   public: 
   
   static bool isPalindrome(string word){
        int j = word.size()-1;
        int i = 0;
        while(i<j){
            if(tolower(word[i]) == tolower(word[j])) {
                i++;
                j--;
                continue;
            }
            return false;
        }
        return true;

   }
};



int main(){
    
    // Palindrome p1;

    // cout<< p1.isPalindrome("radar")<<endl;

    Utils u;

    cout<< u.isPalindrome("radar")<< endl;

    
    return 0;
}