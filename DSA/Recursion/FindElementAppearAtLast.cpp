#include<iostream>
using namespace std;

int findLastAppearance(int* arr, int size, int key) {
    if(size == 0) return -1;
    if(key  == arr[size-1]) return size-1;
    int lastPosition = findLastAppearance(arr, size-1, key);
    if(lastPosition == -1) return -1;
    return lastPosition;
}

int main() {
    int n, x, pos;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to find: ";
    cin >> x;
    pos = findLastAppearance(arr, n, x);
    if(pos == -1) cout << "Not Found in the Array..." << endl;
    else cout << "The Position is = " << pos << endl;
}