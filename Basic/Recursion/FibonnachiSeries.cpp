#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> Rec(int a, int b, int n, vector<int> x) 
{
    x.push_back(a);
    if(n > 0) {
        x = Rec(b, a+b, n-1, x);
    }
    return x;
}
int main()
{
    int n; 
    cin >> n;
    vector<int> x;
    x = Rec(0,1,n,x);
    for(unsigned long i=0; i<x.size(); i++) {
        cout << x.at(i) << " ";
    }
    cout << endl;
    abort();
}