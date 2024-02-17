#include<iostream>
using namespace std;

// Base condition when n is 0..
int sumOfDigits(int n) {
    if(n == 0) return 0;
    int mod = n%10;
    return mod+sumOfDigits(n/10);
}

// Driver Code...
int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}