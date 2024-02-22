#include<bits/stdc++.h>
using namespace std;

int findGCD(int n1, int n2) {
    if(n1 == 0 || n2 == 0) return n1+n2;
    else if(n1 > n2) return findGCD(n1%n2, n2);
    else return findGCD(n1, n2%n1);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int gcd = findGCD(num1, num2);
    cout << gcd << endl;
}

// TC => O(log(min(n1, n2)))....
// SC => O(1)...