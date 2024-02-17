#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Fib(int n) {
    if(n==1) return 0;
    if(n==2) return 1;

    int nth = Fib(n-1) + Fib(n-2);
    return nth;
}
int main()
{
    int n;
    cin >> n;
    cout << Fib(n);
}