#include<iostream>
using namespace std;

// Inline Function for returning Maximum Value...
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

// Driver Code...
int main() {
    int a, b;
    cin >> a >> b;
    cout << "Largest Element is = " << max(a,b) << endl;
}