#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& arr, int n) {
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    while(start < end) {
        if(arr[mid] >= arr[0]) start = mid + 1;
        else end = mid;
        mid = start + (end - start)/2;
    }
    return mid;
}

int findItem(vector<int>& arr, int s, int e, int k) {
    int start = s, end = e;
    int mid = start + (end-start)/2;
    while(start <= end) {
        if(arr[mid] == k) return mid;
        else if(arr[mid] > k) end = mid-1;
        else start = mid + 1;
        mid = start + (end - start)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    int start = 0, end = n-1;
    int pivot = findPivot(arr, n);
    if(k >= arr[pivot] && k<=arr[end]) {
        start = pivot;
    } else if(arr[end] < k){
        end = pivot - 1;
    }
    return findItem(arr, start, end, k);
}

int main() {
    int n, k;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter Element to Find : ";
    cin >> k;
    int pos = search(arr, n, k);

    if(pos < 0) {
        cout << "Not Found";
    } else {
        cout << "Position is = " << pos << endl;
    }
}
