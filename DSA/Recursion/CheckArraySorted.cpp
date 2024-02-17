#include<iostream> 
using namespace std;

bool checkSorted(int arr[], int size) {
    if(size < 2) return true;
    if(arr[0] > arr[1]) {
        return false;
    }
    bool check = checkSorted(arr+1, size-1);
    return check;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    bool sorted = checkSorted(arr, size);
    if(sorted == true) cout << "The Array is Sorted" << endl;
    else cout << "The Array is Not Sorted" << endl;
}