#include<bits/stdc++.h>
using namespace std;

// Driver Code...
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++) {
        bool swapped = false;          
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            swapped = true;
        }
        if(swapped == false) break;                 // If there is no swapped in any iteration then the array is sorted...
        // For example.. (10, 2, 3, 5, 7) => next Iteration (2, 3, 5, 7, 10) => next Iteration No swap break...
    }

    cout << "The Sorted Array is : " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

// TC => O(n^2)...
// SC => O(1)...