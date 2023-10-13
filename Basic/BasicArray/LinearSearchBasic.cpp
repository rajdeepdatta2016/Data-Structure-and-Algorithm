#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter Key : ";
    cin >> key;

    for(int i=0; i<n; i++) {
        if(key == arr[i]) {
            cout << "Key is Present in index = " << i << endl;
            return 0;
        }
    }
    cout << "Key is Not Present" << endl;
}