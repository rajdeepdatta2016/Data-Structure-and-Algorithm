#include<iostream>
using namespace std;
void findElement(int arr[], int n, int e) {
    for(int i=0; i<n; i++){
        if(e == arr[i]) {
            cout << "Found" << endl;
            return;
        }
    }
    cout << "Not Found" << endl;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int element;
    cout << "Enter Element: ";
    cin >> element;
    findElement(arr,n, element);
}