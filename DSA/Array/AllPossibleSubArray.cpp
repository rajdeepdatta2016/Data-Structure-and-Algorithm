#include<iostream>
using namespace std;

void printSubArray(int* arr, int st, int en) {
    for(int i=st; i<=en; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void allPossibleSubArray(int * arr, int n) {
    int st=0, en=0;
    while(st < n) {
        printSubArray(arr, st, en);
        if(en+1 >= n) {
            st++;
            en = st;
        } else {
            en++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "All Sub Arrays Are:" << endl;
    allPossibleSubArray(arr, n);
    delete [] arr;
}