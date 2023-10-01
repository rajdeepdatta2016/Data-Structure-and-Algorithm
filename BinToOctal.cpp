#include<bits/stdc++.h>
using namespace std;
void findOct(int n)
{
    int ans = 0; 
    int x=1;
    while(x <= n)
        x *= 8;
    x/=8;

    while(x)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;
    }
    cout<<"Octal = "<<ans;
}
int main()
{
    int n;
    cin>>n;
    findOct(n);
}