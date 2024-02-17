#include<bits/stdc++.h>
using namespace std;

void print1toN(int n) {
    if(n < 1) return;
    print1toN(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    print1toN(n);
}