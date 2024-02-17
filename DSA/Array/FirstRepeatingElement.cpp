#include<iostream>
using namespace std;

int find1stRepeat(int* arr, int n) {
    const int N = 1e6+2;
    int IdxArr[N], index = -1;
    for(int i=0; i<N; i++) IdxArr[i] = -1;
    for(int i=0; i<n; i++) {
        if(IdxArr[arr[i]] == -1) IdxArr[arr[i]] = 1;
        else IdxArr[arr[i]]++;
    }
    for(int i=0; i<n; i++) {
        if(IdxArr[arr[i]] > 1) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int firstRepeatingIndex = find1stRepeat(arr, n);
    cout << "First Repeating Index = " << firstRepeatingIndex << endl;
    delete [] arr;
}