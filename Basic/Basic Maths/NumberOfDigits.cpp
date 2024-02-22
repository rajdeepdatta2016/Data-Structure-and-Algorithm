#include<bits/stdc++.h>
using namespace std;
 
int countDigit(long long x) {
    int count = 0;
    while(x > 0) {
        count++;
        x /= 10;
    }
    return count;
}

int main() {
    long long int num;
    cin >> num;
    int totalDigits = countDigit(num);
    cout << "Total Digits = " << totalDigits << endl;
}

// Time Complexity = O(logn)...
// Space Complexity = O(1)...