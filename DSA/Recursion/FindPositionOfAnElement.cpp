#include<iostream>
using namespace std;

int findPosition(int* arr, int n, int x) {
    if(n == 0) return -1;
    if(x == arr[0]) return 0;
    int pos = findPosition(arr+1, n-1, x);
    if(pos == -1) return -1;
    return pos+1;
}

int main() {
    int n, x, pos;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter Element to Be find: ";
    cin >> x;
    pos = findPosition(arr, n, x);
    if(pos >= 0) cout << "The Position is = " << pos << endl;
    else cout << "Element Not Found" << endl;
}