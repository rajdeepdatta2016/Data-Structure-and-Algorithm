#include<bits/stdc++.h>
using namespace std;
double geomatricSum(int k) {
    if(k == 0) return 1;
    double digit = 1 / pow(2, k) + geomatricSum(k-1);
    return digit; 
}

int main() {
    int k;
    cin >> k;
    double sum = geomatricSum(k);
    cout << "Geomatric Sum of " << k << " is = " << sum << endl;
}