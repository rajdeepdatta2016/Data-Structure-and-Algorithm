#include<iostream>
#include<vector>
using namespace std;

// Driver Code...
int main() {
    vector<int> arr(5, 1);

    // Enhanced For Loops...
    for(auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    vector<char> arr1(5, 'c');

    // Enhanced For Loops...
    for(auto it : arr1) {
        cout << it << " ";
    }
    cout << endl;

    // Instead of vector<datatype> :: iterator it, we can replace this whole by only "auto" keyword...
    auto it = arr1.begin();
    for(; it != arr1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // typeid(variable).name() is used for finding type of a variable...
    auto num = 1.1;
    auto num2 = 1.1f;
    cout << typeid(num).name() << " " << typeid(num2).name();

    
}