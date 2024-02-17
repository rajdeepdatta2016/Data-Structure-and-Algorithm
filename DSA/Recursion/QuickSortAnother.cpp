#include<bits/stdc++.h>
using namespace std;

int partition(int* arr, int l, int r) {
    int pivotElement = arr[l];
    int countSmallElement = 0;
    for(int i=l+1; i<=r; i++) {
        if(arr[i] <= pivotElement) countSmallElement++;
    }
    swap(arr[l], arr[l+countSmallElement]);
    int i=l, j=r, partitionIndex = l+countSmallElement;
    while(i < partitionIndex && j > partitionIndex) {
        if(arr[i] <= pivotElement) i++;
        else if(arr[j] > pivotElement) j--;
        else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return partitionIndex;
}

void quickSort(int* arr, int l, int r) {
    if(l >= r) return;
    int pivotIndex = partition(arr, l, r);

    quickSort(arr, l, pivotIndex-1);
    quickSort(arr, pivotIndex+1, r);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}