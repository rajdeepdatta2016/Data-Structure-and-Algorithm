#include<bits/stdc++.h>
using namespace std;

pair<int, int> pairSum(int* arr, int n, int k) {
    int st=0, en=1;
    pair<int, int> sum;
    while(st < n) {
        if(arr[st] + arr[en] == k) {
            sum.first = arr[st];
            sum.second = arr[en];
            break;
        }
        if(en+1 >= n) {
            st++;
            en = st+1;
        } else en++;
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

// O(nlogn) Time Complexity...