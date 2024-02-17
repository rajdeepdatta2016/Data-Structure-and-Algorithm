#include<bits/stdc++.h>
using namespace std;

int binarysearchAlgorithm(int* arr, int start, int end, int key) {
    if(start > end) return -1;
    int mid = (start+end)/2;
    if(arr[mid] == key) return mid;
    if(arr[mid] > key) return binarysearchAlgorithm(arr, start, mid-1, key);
    else return binarysearchAlgorithm(arr, mid+1, end, key);
}

int binarySearch(int input[], int size, int element) {
    int start = 0, end = size -1;
    int pos = binarysearchAlgorithm(input, start, end, element);
    return pos;
}

int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cin >> key;
    int pos = binarySearch(arr, n, key);
    if(pos != -1) cout << "Element is Founded. Position = " << pos << endl;
    else cout << "Element is not Founded" << endl; 
}