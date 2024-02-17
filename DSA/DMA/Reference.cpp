#include<iostream>
using namespace std;

// Reference Variable
int sum(int& a, int& b) {
    return a+b;
}

// Driver Code
int main() {
    int a, b;
    cin >> a >> b;
    cout << "Sum = " << sum(a, b) << endl;
}