#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurance(vector<int>& arr) {
    int i=0; 
    vector<int> ans;
    sort(arr.begin(), arr.end());
    while(i < arr.size()) {
        int count = 1;
        for(int j=i+1; j<arr.size(); j++) {
            if(arr[i] == arr[j]) count++;
        }
        ans.push_back(count);
        i += count;
    }
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++) {
        if(ans[i] == ans[i+1]) return false;
    }
    return true;
}
int main() {
    int a, n; 
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    bool ans = uniqueOccurance(arr);
    if(ans == true) {
        cout << "Unique Array..." << endl;
    }
    else{
        cout << "Not Unique Array..." << endl;
    }
}