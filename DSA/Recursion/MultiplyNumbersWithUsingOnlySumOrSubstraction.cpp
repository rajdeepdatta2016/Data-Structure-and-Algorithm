#include<iostream>
using namespace std;

// multiply Numbers by using sum...
int multiplyNumbers(int m, int n) {
    if(n == 0 || m == 0) return 0;

    return m + multiplyNumbers(m, n-1);
}

// Driver Code...
int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
