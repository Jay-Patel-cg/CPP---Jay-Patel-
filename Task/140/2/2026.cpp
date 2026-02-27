// #include <iostream>
// #include <vector> 
// #include <algorithm>

// using namespace std;

// int main()
// {
//   vector<int> v1;
//   int n = 5;
//   int x =0;
   
//   while(n>0){
//       cout << "Enter a number : " << endl;
//       cin >> x;
//       v1.push_back(x);
//       --n;
//   }

//     sort(v1.begin(), v1.end());
    
//     reverse(v1.begin(), v1.end());
    
//     for(int value : v1){
//         cout << value << endl;
//     }

//     return 0;
// }



   //  1st question 2nd method ->
   

// #include <iostream>
// #include <vector>
// #include <algorithm>  

// using namespace std;

// int main() {
//     vector<int> numbers;

//     cout << "Enter 5 numbers: " << endl;
//     for (int i = 0; i < 5; i++) {
//         int value;
//         cin >> value;
//         numbers.push_back(value);
//     }

//     sort(numbers.begin(), numbers.end());

//     reverse(numbers.begin(), numbers.end());

//     cout << "Final vector elements:" << endl;
//     for (int i = 0; i < numbers.size(); i++) {
//         cout << numbers[i] << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <list>
// #include <algorithm>

// using namespace std;

// int main()
// {

//     int m,n,x;
    
//     list<int>l1;
//     list<int>l2;
//     list<int>l3;
    
//     cin >> m;
//     cin >> n;
    
//     for(int i=0; i<m; i++){
//         cin >> x;
//         l1.push_back(x);
//     }
//     for(int i=0; i<n; i++){
//         cin >> x;
//         l2.push_back(x);
//     }
    
//     for(int i:l1) l3.push_back(i);
//     for(int i:l2) l3.push_back(i);
    
//     l3.sort();
    
//     for(int i:l3) cout << i << " ";
    
    
//     return 0;
// }





// #include <iostream>
// #include <deque>

// using namespace std;

// int main(){

//     deque<string> d;
    
//     string s;
    
//     for(int i=0; i<3; i++){
//         cout << i << "string" << endl ;
//         cin >> s;
//         d.push_back(s);
//     }
    
//     int value;
    
//     cout << " value " << endl;
//     cin >> value;
    
//     if(value < 4 && value > 0){
//         cout << d.at(value-1) << endl;
//     }
//     else {
//         cout << "Enter valid value " << endl;
//     }
    
//     for(string c:d){
//         cout << c << endl;
//     }
    

//     return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
    
//     vector<int> v1;
//     int n = 10;
//     int x = 0;
    
//     while(n>0){
//       cout << "Enter a number : " << endl;
//       cin >> x;
//       v1.push_back(x);
//       --n;
//     }
    
//     for(int i= v1.size() -1; i>=0; i--){
//         if(i%2==0){
//             v1.erase(v1.begin() + i);
//         }
//     }
    
//     cout << "Remaining : " << endl;
//     for(int i=0; i<v1.size(); i++){
//         cout << v1[i] << " " << endl;
//     }
    
//     cout << " Total Size: " << v1.size();
    
//     return 0; 
// }

//  4th 2nd method

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector <int> v(10);
    
//     cout << "enter 10 element" << endl;
//     for(int i=0;i<10;i++){
//         cin >> v[i];
//     }
    
//     for(int i=9;i>=0;i--){
//         if(i%2==0){
//             v.erase(v.begin()+i);
//             cout << "\nindex element that is removed :- " << i << endl;
//         }
//     }
    
//     cout << "\nremaining element are :- " << endl;
    
//     for(int value : v){
//         cout << value << " ";
//     }
    
//     cout << "\ntotal size :- " << v.size() << endl;
    
//     return 0;
// }