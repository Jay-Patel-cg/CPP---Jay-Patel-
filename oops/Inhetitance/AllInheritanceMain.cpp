
//  -> This Will Help you underStand All The Inheritance 



//          -> This is single Inheritance (One child inherits from one parent)


// #include <iostream>
// using namespace std;


// class Vehicle {
//     public:
//     void display(){
//         cout << "Hello this is Parent Class" << endl;
//     }
// };

// class Car: public Vehicle{
//     public:
//     void show(){
//         cout << "This is Child Class" << endl;
//     }
// };



// int main()
// {
//     Car obj;
//     obj.display();
//     obj.show();

//     return 0;
// }



//          -> This is Multiple Inheritance (One child inherits from multiple parents)



// #include <iostream>
// using namespace std;

// class Zomato{
//     public:
//     void displayParent1(){
//         cout << "This is Parent class 1 Zomato" << endl;
//     }
// };

// class Swiggy{
//     public:
//     void displayParent2(){
//         cout << "This is Parent class 2 Swiggy" << endl;
//     }
// };

// class Instamart : public Zomato , public Swiggy {
//     public:
//     void displayChild(){
//         cout << "This is a child class of Zomato and Swiigy -> The Instamart" << endl;
//     }
// };


// int main(){
    
//   Instamart show;
  
//   show.displayParent1();
//   show.displayParent2();
//   show.displayChild();
    
//     return 0;
// }




//             -> This is Multilevel Inheritance (Chain inheritance: A → B → C)



// #include <iostream>
// using namespace std;

// class Aatma{
//     public:
//     void Avoid(){
//         cout << "This is first Aatma you can say that Main Parent" << endl;
//     }
// };

// class Bhut : public Aatma { 
//     public:
//     void Bhyankar(){
//         cout << "This is Second Bhut You can say that child of Aatma and Parent of Chudel"<< endl;
//     }
// };

// class Chudel : public Bhut {
//     public:
//     void Chaman(){
//         cout << "This is Third Chudel You can sat that child of Bhut and Parent of Dayan" << endl;
//     }
// };

// class Dayan : public Chudel {
//     public:
//     void Dakan(){
//         cout << "This is Fourth You can say that child of Chudel " << endl;
//     }
// };


// int main(){
   
//     Dayan Rakshash;
    
//     Rakshash.Avoid();
//     Rakshash.Bhyankar();
//     Rakshash.Chaman();
//     Rakshash.Dakan();
    
    
//     return 0;
// }



//             -> This is Hierarchical Inheritance (One parent → multiple children)



// #include <iostream>
// using namespace std;


// class Animal{
//     public:
//     void MainParent(){
//         cout << "This is Main Parent Animal " << endl;
//     }
// };

// class Dog : public Animal {
//     public:
//     void Loyal(){
//         cout << "Dog's Are Fucking Loyal like No one " << endl;
//     }
// };

// class Cat : public Animal {
//     public:
//     void Cute(){
//         cout << "Cat's Are the most Cute Animal " << endl;
//     }
// };


// int main(){
    
//     Dog Loyalty;
//     Cat Meow;
    
//     Loyalty.MainParent();
//     Loyalty.Loyal();
    
//     Meow.MainParent();
//     Meow.Cute();
    
//     return 0;
// }


//          -> This is Hybrid Inheritance (Combination of multiple inheritance types , Uses virtual keyword to avoid ambiguity (diamond problem) )



// #include <iostream>
// using namespace std;


// class Parent{
//     public:
//     void ParentMain(){
//         cout << "This is main parent " << endl;
//     }
// };

// class Child1 : virtual public Parent {
//     public:
//     void ChildFirst(){
//         cout << "This is First Child " << endl;
//     }
// };

// class Child2 : virtual public Parent {
//     public:
//     void ChildSecond(){
//         cout << "This is Second Child " << endl;
//     }
// };

// class Child3 : public Child1 , public Child2 {
//     public:
//     void ChildThird(){
//         cout << "THis is Third and Last Child " << endl;
//     }
// };


// int main(){
    
//     Child3 LastChild;
    
//     LastChild.ParentMain();
//     LastChild.ChildFirst();
//     LastChild.ChildSecond();
//     LastChild.ChildThird();
    
//     return 0;
// }











