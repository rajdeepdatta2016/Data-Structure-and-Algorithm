#include<bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    int nextZero = 0, nextTwo = n-1, i=0;
    while(i <= nextTwo) {
        if(arr[i] == 0) {
            swap(arr[i], arr[nextZero]);
            i++;
            nextZero++;
        } else if(arr[i] == 2) {
            swap(arr[i], arr[nextTwo]);
            nextTwo--;
        } else {
            i++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int * arr = new int[n];
    cout << "Enter Elements Between 0, 1, 2:" << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort012(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;
}

// Time Complexity = O(n)...
// Space Complexity = O(1)...