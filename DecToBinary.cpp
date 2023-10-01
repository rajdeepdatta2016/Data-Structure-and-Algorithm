#include<bits/stdc++.h>
using namespace std;
void Bin(int n)
{
    int x = 1;
    int ans = 0;
    while(x <= n)
        x*=2;
    x/=2;
    
    while(x)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    cout<<"Binary = "<<ans;
}
int main()
{
    int n; 
    cin>>n; 
    Bin(n);
}