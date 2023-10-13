#include<iostream>
using namespace std;
void NCR(int n, int r)
{
    int nF=1,rF=1,diffF=1,res;
    for(int i=1; i<=n; i++)
    {
        nF = nF*i;
    }
    for(int i=1; i<=r; i++)
    {
        rF = rF*i;
    }
    for(int i=1; i<=n-r; i++)
    {
        diffF = diffF*i;
    }
    res = nF/(rF*diffF);
    cout<<"Result = "<<res;
}
int main()
{
    int n,r;
    cin>>n>>r;
    NCR(n,r);
}