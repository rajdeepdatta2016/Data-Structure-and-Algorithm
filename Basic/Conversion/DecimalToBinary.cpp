#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=0,n,ans=0,bit;
    bool sign = true;
    cin>>n;

    if(n < 0)
    {
        n=-n;
        sign = false;
    }
    while(n != 0)
    {
        bit = n&1;
        ans = (pow(10,i) * bit) + ans;
        n = n>>1;
        i++;
    }
    if(sign == false)
    {
        ans = -ans;
    }
    cout<<ans<<endl;
}