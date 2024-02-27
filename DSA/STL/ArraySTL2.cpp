#include<iostream>
#include<array>
using namespace std;

int main() {

    // STL Array...
    array<int, 4> arr;
    int size = arr.size();
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // STL array declare and initialize...
    array<int, 4> arr2 = {1, 2, 3, 4};
    size = arr2.size();
    for(int i=0; i<size; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    // .at()    TC => O(1)...
    cout << "2nd Index = " << arr.at(2) << endl;
    // .empty() TC => O(1)...
    if(arr.empty()) cout << "Empty" << endl;
    else cout << "Not Empty" << endl;
    // .front() TC => O(1)...
    cout << "First Element = " << arr.front() << endl;
    // .back()  TC => O(1)...
    cout << "Last Element = " << arr.back() << endl;
}

// .at()...
// .empty()...
// .front()...
// .back()...