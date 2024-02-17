#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int> arr) {
    int pairs = 0, count = 1;
    sort(arr.begin(), arr.end());
    int size = arr.size();
    for(int i=0; i<size; i++) {
        if(arr[i] != arr[i-1]) {
            pairs += (count*(count-1))/2;
            count = 1;
        } else count++;
    }
    pairs += (count*(count-1))/2;
    return pairs;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int pairs = numIdenticalPairs(arr);
    cout << "Total Identical Pairs are = " << pairs << endl;
}

// Time Complexity = O(nlogn)...
// Space Complexity = O(logn)...