#include<bits/stdc++.h>
using namespace std;

void calculateSpan(int prices[], int n, int spans[]) {
    stack<int> s;
    for(int i=0; i<n; i++) {
        while(!s.empty() && prices[s.top()] < prices[i]) s.pop();
        if(s.empty()) spans[i] = i+1;
        else spans[i] = i - s.top();
        s.push(i);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n], ans[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    calculateSpan(arr, n, ans);
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}