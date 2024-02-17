#include<bits/stdc++.h>
using namespace std;

// Partition the Lower Element of the Pivot to Left and Higher Element of the Pivot to Right... 
int partition(int arr[], int l, int r) {

    // Select Last Element as Pivot...
    int pi = arr[r];

    // Point The Before Position of arr[l] bt i...
    int i = l-1;

    for(int j=l; j<r; j++) {

        // If arr[j] < pi then increse the i positon to next and swap the value of arr[i] & arr[j]...
        if(arr[j] < pi) {
            i++;
            swap(arr[i], arr[j]);
        }

        // If not just skip this iteration and do j++...
    }

    // Here the element from l to i are less then Pivot and i+1 to n-1 are greater than Pivot. So for that reason, swap arr[i+1] with arr[n] to set the Pivot Element to Its correct Position...
    swap(arr[i+1], arr[r]);

    // return i+1 which is now the new location of this Pivot, So for that next quick sort will be on left and right part of the Pivot(i+1)...
    return i+1;
}

// Quick Sort Algorithm...
void quickSort(int arr[], int l, int r) {
    if(l<r) {

        // Store the previous Pivot element to pi, because the next Quick Sort Algorithm will be on the Left and Right Side of the Pivot Element Position...
        int pi = partition(arr, l, r);

        // Apply Quick Sort Algorithm to the left part of the Pivot, which are smaller than the Pivot...
        quickSort(arr, l, pi-1);

        // Apply Quick Sort Algorithm to the right part of the Pivot, which are larger than the Pivot...
        quickSort(arr, pi+1, r);
    }
}

// Driver Code...
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
    cout << endl;
}