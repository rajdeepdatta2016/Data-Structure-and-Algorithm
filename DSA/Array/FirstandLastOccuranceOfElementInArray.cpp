#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > key) end = mid-1;
        else start = mid+1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid+1;
        }
        if(arr[mid] > key) end = mid-1;
        else start = mid+1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int k;
    cout << "Enter element to search : ";
    cin >> k;
    pair<int, int> p = firstAndLastPosition(arr, n, k);
    cout << p.first << " " << p.second << endl;
}
