#include<iostream>
using namespace std;

int findMissing(int * arr, int n) {
    int N = 1e6+2, el = -1;
    bool check[N];
    for(int i=0; i<N; i++) check[i] = false;
    for(int i=0; i<n; i++) {
        if(arr[i] >= 0) check[arr[i]] = true;
    }
    for(int i=1; i<N; i++) {
        if(check[i] == false) {
            el = i;
            break;
        }
    }
    return el;
}

int main() {
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int missingElement = findMissing(arr, n);
    cout << "Missing Element is = " << missingElement << endl;
    delete [] arr;
}