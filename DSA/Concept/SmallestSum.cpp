#include<bits/stdc++.h>
using namespace std;

int findSmallestSum(int num, int n) {
    vector<int> digits(n);
    for(int i=0; i<n; i++) {
        digits[i] = num%10;
        num /= 10;
    }
    sort(digits.begin(), digits.end());
    int d1=0, d2=0;
    if(n%2 == 0) {
        for(int i=0; i<n; i+=2) {
            d1 = d1*10 + digits[i];
            d2 = d2*10 + digits[i+1];
        }
    } else {
        for(int i=0; i<n-1; i+=2) {
            d1 = d1*10 + digits[i];
            d2 = d2*10 + digits[i+1];
        }
        d1 = d1*10 + digits[n-1];
    }
    return (d1+d2);
}

int main() {
    int num, size=0;
    cin >> num;
    for(int i=1; i<num; i*=10) {
        size++;
    }
    int sum = findSmallestSum(num, size);
    cout << "Smallest Sum = " << sum << endl;
}

// Time Complexity = O(nlogn)...
// Space Complexity = O(n)...