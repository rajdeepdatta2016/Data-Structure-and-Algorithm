#include<bits/stdc++.h>
using namespace std;

// Binary Search Algorithm Process....
int findKeyBinarySearch(int arr[], int n, int key) {
    int start = 0, end = n;
    while(start <= end) {

        // Finding Mid By Maintaining the range of Integer....
        int mid = start + (end-start)/2;
        
        if(key == arr[mid]) return mid;

        else if(key < arr[mid]) end = mid-1;

        else start = mid +1;
    }
    // If not Found....
    return -1;
}

int main() {
    int n, key;
    cin >> n;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // Selection Sort Algorithm...
    for(int i=0; i<n-1; i++) {
        int min = i;
        for(int j=i+1; j<n; j++) {
            if(arr[min] > arr[j]) min = j;
        }
        if(min != i) swap(arr[min], arr[i]);
    }
    // Enter the Key...
    cout << "Enter Key : ";
    cin >> key;
    int pos = findKeyBinarySearch(arr,n,key);

    // If Not Found, the value of P => -1.....
    if(pos < 0) {
        cout << "Not Found";
    }
    else{
        cout << "Found!! Index = " << pos;
    }
    delete [] arr;
}