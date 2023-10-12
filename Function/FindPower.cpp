#include<iostream>
using namespace std;
int FindPower(int a, int b) {
    int ans = 1;
    for(int i=1; i<=b; i++) {
        ans *= a;
    }
    return ans;
}
int main() {
    int a,b;
    cin >> a >> b;

    int res = FindPower(a,b);
    cout << "Answer = " << res;
}