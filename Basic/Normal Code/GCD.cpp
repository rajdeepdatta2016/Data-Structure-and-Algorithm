#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b) {
    if(a == 0 || b == 0) return a+b;
    else if(a == b) return a;
    else if(a > b) return findGCD(a%b, b);
    else return findGCD(a, b%a);
}

int main() {
    int a, b;
    cin >> a >> b;
    int ans = findGCD(a, b);
    cout << "GCD = " << ans << endl; 
}

// Time Complexity = O(logn)...
// Space Complexity = O(1)...