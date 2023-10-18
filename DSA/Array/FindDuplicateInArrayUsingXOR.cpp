#include<iostream>
using namespace std;
int findDuplicate(vector<int> &arr) {
    int ans = 0;
    for(int i=0; i<arr.size(); i++) {
        ans = ans^arr[i];
    }
    for(int i=1; i<arr.size(); i++) {
        ans = ans^i;
    }
    return ans;
}
int main() {
    int v,n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin >> v;
        arr.push_back(v);
    }
    int duplicate = findDuplicate(arr);
    cout << "Duplicate Value is = " << duplicate << endl;
    return 0;
}