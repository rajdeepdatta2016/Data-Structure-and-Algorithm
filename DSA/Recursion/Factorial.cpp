#include<iostream>
using namespace std;

// Find Factorial using Recursion...
int findFactorial(int n) {
    if(n == 1) return 1;
    else {
        return n * findFactorial(n-1); 
    }
}

// Driver Code...
int main() {
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is = " << findFactorial(n) << endl;
}