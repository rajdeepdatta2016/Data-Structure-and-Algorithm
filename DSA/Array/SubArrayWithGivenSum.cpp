#include<bits/stdc++.h>
using namespace std;

pair<int, int> findSubArray(int * arr, int n, int s) {
    pair<int, int> res;
    int st=0, en = 0, currentSum = 0;
    while(st < n) {
        currentSum += arr[en];
        if(currentSum == s) {
            res.first = st;
            res.second = en;
            break;
        }
        else if(en >= n) {
            st++;
            en = st;
            currentSum=0;
        }
        else {
            en++;
        }
    }
    return res;
}

int main() {
    int n, s;
    cin >> n >> s;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    pair<int, int> range = findSubArray(arr, n, s);
    cout << range.first << " " << range.second << endl;
    delete [] arr;
}