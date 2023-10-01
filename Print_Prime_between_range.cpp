#include<iostream>
#include<cmath>
using namespace std;
void primeNo(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        if(i<2)
            continue;
        bool x=true;
        for(int j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                x=false;
                break;
            }
        }
        if(x==true)
            cout<<i<<" ";
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Prime Nos are: "<<endl;
    primeNo(a,b);
}