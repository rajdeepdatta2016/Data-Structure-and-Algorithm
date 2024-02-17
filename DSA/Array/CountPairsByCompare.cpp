#include<bits/stdc++.h>
using namespace std;

// Return the Count of pairs whose 1st Value > 2nd Value...
int countPairs(vector<pair<int,int> > a) {
    int size = a.size();
    int count = 0;
    for(int i=0; i<size; i++) {
        if(a[i].first > a[i].second) count++;
    }
    return count;
}

// Driver Code...
int main(){
    
    int n;
    cin>>n;
    
    vector<pair<int,int> > a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    cout<<countPairs(a);
    return 0;
}
