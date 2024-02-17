#include<bits/stdc++.h>
using namespace std;

vector<bool> findMaxCandiesKid(vector<int>& arr, int extraCandies) {
    int size = arr.size();
    vector<bool> ans;
    int maxCandies = 0;
    for(int i=0; i<size; i++) {
        maxCandies = max(maxCandies, arr[i]);
    }
    for(int i=0; i<size; i++) {
        if((arr[i] + extraCandies) >= maxCandies) ans.push_back(true);
        else ans.push_back(false);
    }
    return ans;
}

int main() {
    int n, extraCandies;
    cin >> n >> extraCandies;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<bool> ans = findMaxCandiesKid(arr, extraCandies);
    cout << "The Candy Array is :" << endl;
    // Boolalpha is used to print values in boolean format...
    for(bool b: ans) {
        cout << boolalpha << b << " ";
    }
}

// Time Complexity = O(n)...
// Space Complexity = O(n)...