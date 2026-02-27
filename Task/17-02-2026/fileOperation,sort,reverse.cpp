

// // Task -> Create STL vector(size) take "size" from user then insert element from user-side , sort the "vector" reverse it and then Store it in side "Outpute.txt" (use prebuild sort and reverse and file operation) 


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <fstream>

// using namespace std;

// int main() {
//     int size;

//     cout << "Enter size of vector: ";
//     cin >> size;

//     vector<int> v(size);

//     cout << "Enter " << size << " elements:\n";
//     for(int i = 0; i < size; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());

//     reverse(v.begin(), v.end());

//     ofstream file("Outpute.txt");

//     if(file.is_open()) {
//         file << "Sorted and Reversed Elements:\n";
//         for(int i = 0; i < v.size(); i++) {
//             file << v[i] << " ";
//         }
//         file.close();
//         cout << "Data successfully written to Outpute.txt\n";
//     } else {
//         cout << "Error opening file.\n";
//     }

//     return 0;
// }


//  Create STL : array < int , size > -> take "size" from user then insert element from user-side , find a max-element min-element ,accumulate entire element and then store max, min & total accumulate in "reuslt.txt" -> in this task use list instade of array use list


#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>
#include <fstream>

using namespace std;

int main() {
    int size;

    cout << "Enter size: ";
    cin >> size;

    list<int> myList;

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++) {
        int value;
        cin >> value;
        myList.push_back(value);
    }

    int maxElement = *max_element(myList.begin(), myList.end());

    int minElement = *min_element(myList.begin(), myList.end());

    int total = accumulate(myList.begin(), myList.end(), 0);

    ofstream file("result.txt");

    if(file.is_open()) {
        file << "Maximum Element: " << maxElement << endl;
        file << "Minimum Element: " << minElement << endl;
        file << "Total Sum: " << total << endl;

        file.close();
        cout << "Data written successfully to result.txt\n";
    } else {
        cout << "Error opening file.\n";
    }

    return 0;
}
