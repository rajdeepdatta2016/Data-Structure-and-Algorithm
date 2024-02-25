#include<iostream>
using namespace std;

// Driver Code...
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        int current = arr[i];
        int j = i-1;

        while(current < arr[j] && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    cout << "Sorted Array is : " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

// TC => O(n^2)...
// SC => O(1)...