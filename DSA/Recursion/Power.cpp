#include<iostream>
using namespace std;

int power(int x, int n) {
    if(n < 1) return 1;
    int res = x * power(x, n-1);
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    int pow = power(a, b);
    cout << "Answer is = " << pow;
}