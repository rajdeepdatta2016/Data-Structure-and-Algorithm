#include<bits/stdc++.h>
using namespace std;
void findHex(int n)
{
    string ans="";
    int x=1;
    while(x <= n)
        x*=16;
    x/=16;

    while(x)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        if(lastDigit <= 9)
            ans = ans + to_string(lastDigit);
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
        x/=16;
    }
    cout<<"Hex = "<<ans;
}
int main()
{
    int n;
    cin>>n;
    findHex(n);
}