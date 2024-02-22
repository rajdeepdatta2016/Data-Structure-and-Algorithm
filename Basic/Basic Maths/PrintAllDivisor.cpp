#include<bits/stdc++.h>
using namespace std;
void printAllDivisor(int num) {
    vector<int> factors;
    for(int i=1; i*i<=num; i++) {
        if(num % i == 0) {
            factors.push_back(i);
            if(i != (num/i)) factors.push_back(num/i);
        }
    }
    sort(factors.begin(), factors.end());
    for(auto it : factors) cout << it << " ";
}

int main() {
    int n;
    cin >> n;
    printAllDivisor(n);
}

// TC => O(nlogn) : n => numbers of factors...
// SC => O(n) : n => numbers of factors...