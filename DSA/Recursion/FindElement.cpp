#include<iostream>
using namespace std;

bool checkPresent(int* arr, int size, int key) {
    if(size == 0) return false;
    if(key == arr[0]) return true;
    bool isPresent = checkPresent(arr+1, size-1, key);
    return isPresent;
}

int main() {
    int n, el;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[n];
    }
    cout << "Enter Element to Find: ";
    cin >> el;
    if(checkPresent(arr, n, el)) cout << "Element is Present" << endl;
    else cout << "Element is Not Present" << endl;
}