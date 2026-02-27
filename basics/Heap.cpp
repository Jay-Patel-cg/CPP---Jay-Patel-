
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int> v = {18,56,28,29,32};
    
    cout << "All element before Heap (max-hep) conversion ..." << endl;
    
    for(const auto& value : v){
        cout << "The values are ..... " << value <<  endl;
    }
    
    cout << "All element after Heap (max-hep) conversion ..." << endl;
    
    make_heap(v.begin(), v.end());
    
    for(const auto& value1 : v){
        cout << "The Values are ..... " << value1 <<  endl ;
    }
    
    
    cout << "POP Opration... " << endl;
    
    pop_heap(v.begin(), v.end());
    
    for(const auto& value1 : v){
        cout << "The Vlaues are ..... " << value1 << endl;
    }
    
    v.pop_back();
    
    cout << "POP Operation is Done ..... " << endl;
    
    for(const auto& value1 : v){
        cout << "The Vlaue are .... " << value1 << endl;
    }
    
    cout<< "INsertion Operation ....." << endl;
    
    v.push_back(789);
    
    cout << "Before balencing the heap tree " << endl;
    
    for(const auto& value1 : v){
        cout << "The Vlaue are .... " << value1 << endl;
    }
    
    push_heap(v.begin(), v.end());
    
    cout << "After balencing the heap tree " << endl;
    
    for(const auto& value1 : v){
        cout << "The Vlaue are .... " << value1 << endl;
    }
    
    
    
    return  0;
}


