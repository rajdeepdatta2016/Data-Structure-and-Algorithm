#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter Nos: " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int find;
    cout << "Enter Element to Find : ";
    cin >> find;
    for(int i=0; i<n; i++) {
        if(find == arr[i]) {
            cout << "Found";
            return 0;
        }
    }
    cout << "Not Found";
    return 0;
}