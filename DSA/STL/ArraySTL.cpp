#include<iostream>
using namespace std;
int main() {
    int arr[5];
    memset(arr, 0, sizeof(arr));

    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << endl;

    fill(arr, arr+5, 100);

    for(int i=0; i<5; i++) cout << arr[i] << " ";
    cout << endl;

    int ar[5] = {3, 2, 5, 1, 4};
    sort(ar, ar+5);
    reverse(ar, ar+5);
    swap(ar[0], ar[2]);

    for(int i=0; i<5; i++) cout << ar[i] << " ";
    cout << endl;

    int n = sizeof(ar)/sizeof(ar[0]);
    cout << "Size of Array is = " << n;
}