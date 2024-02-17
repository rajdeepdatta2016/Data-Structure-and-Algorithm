#include<iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int i=5;
    while(i <= n) {
        ans += (n/i);
        i *= 5;
    }
    cout << "Total Number of Trailing Zero's are = " << ans << endl;
}
// Time Complexity = O(logn)...
// Space Complexity = O(1)...