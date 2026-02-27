
#include <iostream>
#include <vector> // <set> -> also give the same solution code runs perfectly but have to change everywhere  <deque> -> also
#include <algorithm>
#include <deque>
#include <list>
#include <numeric>

using namespace std;

int main(){
    
    
    list<int> l1 = {56,-90, 5,67,78,21};
    
    // sort(l1.begin(), l1.end());
    
    bool result = binary_search(l1.begin(), l1.end(), 67);
    
    if(result){
        cout << "67 Element is Present" << endl;
    } else{
        cout << "67 Element is not Present" << endl;
    }
    
    
    
    
    // list<int> l1 = {10,40,45};
    
    // auto itr = accumulate(l1.begin(), l1.end(), 0);
    
    // cout << "Total element is: " << itr << endl;
    
    
    
    
    // vector<int> v1 = {2,45,6,7,8,2,56};
   
    // sort(v1.begin(), v1.end());
    
    // for(auto& value: v1){
    //     cout << value << endl;
    // }
   
    
    // deque char = { "A", "B", "C", "D", "E"};
    
    // reverse(char.begin(), char.end());
    
    //  line 47 and 49 are not complete
    
    
    // auto itr = find(v1.begin(), v1.end(), 45);
    
    // if(itr != v1.end()){
    //     cout << "Element is : " << *itr << endl;
    // }
    // else{
    //     cout << "Element dose not exist: " << endl;
    // }
    
    return 0;
}
