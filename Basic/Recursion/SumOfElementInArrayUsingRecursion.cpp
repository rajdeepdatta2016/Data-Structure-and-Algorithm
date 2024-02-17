#include<iostream>
using namespace std;
int FindSum(int curr, vector<int>& a) {
    int n = a.size();
    if(curr == n) return 0;
    return (a[curr] + FindSum(curr+1,a));
}
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    cout << "Enter Value: " << endl;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << "Sum = " << FindSum(0,a);
}