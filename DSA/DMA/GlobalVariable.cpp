#include<iostream>
using namespace std;

// Global Variable Declare...
int Iteration = 0;

// Factorial Function... 
int Factorial(int a) {
    int ans = 1;
    for(int i=1; i<=a; i++, Iteration++) {
        ans *= i;
    }
    return ans;
}
// Driver Code...
int main() {
    int x;
    cin >> x;
    while(x != 0) {
        cin >> x;
        Iteration++;
    }
    int a;
    cout << "Enter a Value : ";
    cin >> a;
    cout << "Factorial of " << a << " is = " << Factorial(a) << endl;
    cout << "Total Iteration of the Program is = " << Iteration;
}