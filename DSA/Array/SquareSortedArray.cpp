#include <bits/stdc++.h> 
using namespace std;

// Create an Square Sorted Array of Main Array...
vector<int> sqsorted(vector<int> & arr) {
    int size = arr.size();
    vector<int> sqArr(size);
    for(int i=0; i<size; i++) {
        sqArr[i] = (arr[i] * arr[i]);
    }
    sort(sqArr.begin(), sqArr.end());
    return sqArr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    vector<int> sqArray = sqsorted(arr);
    for(int i=0; i<n; i++) cout << sqArray.at(i) << " ";
    cout << endl;
}