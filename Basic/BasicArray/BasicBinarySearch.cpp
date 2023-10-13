#include<iostream>
using namespace std;
int findKeyBinarySearch(int arr[], int n, int key) {
    int s = 0, e = n;
    while(s <= e) {
        int mid = (s+e) / 2;
        
        if(key == arr[mid]) return mid;

        else if(key < arr[mid]) e = mid-1;

        else s = mid +1;
    }
    return -1;
}

int main() {
    int n,temp;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   
    int key;
    cout << "Enter Key : ";
    cin >> key;
    int pos = findKeyBinarySearch(arr,n,key);

    if(pos < 0) {
        cout << "Not Found";
    }
    else{
        cout << "Found!! Index = " << pos;
    }
}