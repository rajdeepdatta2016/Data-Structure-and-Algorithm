#include<bits/stdc++.h>
using namespace std;

pair<int, int> pairSum(int* arr, int n, int k) {
    pair<int , int> sum;
    sort(arr, arr+n);
    int low = 0, high = n-1;
    while(low < high) {
        if(arr[low] + arr[high] == k) {
            sum.first = arr[low];
            sum.second = arr[high];
            break;
        }
        if(arr[low] + arr[high] < k) low++;
        else high--;
    }
    return sum;
}

int main() {
    int n, k;
    cin >> n >> k;
    int * arr = new int[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    pair<int, int> sum = pairSum(arr, n, k);
    cout << "Values are = " << sum.first << " " << sum.second;
    delete [] arr;
}

// O(n) Time Compexity...