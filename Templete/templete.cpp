// #include<iostream>

// using namespace std;

// template<class T1, class T2>

// void add(T1 a, T2 b)
// {
//     cout << a+b << endl;
// }
// // void add4(double a, float b){
// //     cout << a+b << endl;
// // }

// // void add3(int a, float b){
// //     cout << a+b <<endl;
// // }

// // void add2(double a, double b){
// //     cout << a+b <<endl;
// // }

// // void add1(float a, float b){
// //     cout << a+b <<endl;
// // }

// // void add(int a, int b){
// //     cout << a+b <<endl;
// // }

// int main(){
    
//     add(10, 20);//int , int
//     add(10, 67.8);// int, float
//     add(45.687, 54.869);
//     add('A', 'g');
//     // add("samir", "Hii");
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

template<class T1>

// void add(T1 a, T2 b)
// {
//     cout << a+b << endl;
// }

bool palindrome(vector<T1>& a){
    int i = 0;
    int j = a.size()-1;
    
    while(i<j){
        if(a[i] != a[j]){
            return false;
        }
        
        ++i;
        --j;
    }
    return true;
}
// void add4(double a, float b){
//     cout << a+b << endl;
// }

// void add3(int a, float b){
//     cout << a+b <<endl;
// }

// void add2(double a, double b){
//     cout << a+b <<endl;
// }

// void add1(float a, float b){
//     cout << a+b <<endl;
// }

// void add(int a, int b){
//     cout << a+b <<endl;
// }

int main(){
    
    // add(10, 20);//int , int
    // add(10, 67.8);// int, float
    // add(45.687, 54.869);
    // add('A', 'g');
    // // add("samir", "Hii");
    
    // Palindrome....
    vector<int>v1 = {1,2,1};
    vector<char>v2 = {'a','b','a'};
    vector<int>v3 = {1,2,1,3};
    
    cout << palindrome(v1) << endl;
    cout << palindrome(v2) << endl;
    cout << palindrome(v3) << endl;
    return 0;
}