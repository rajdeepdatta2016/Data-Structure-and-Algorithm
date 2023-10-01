#include<iostream>
using namespace std;
int main()
{
    int n,temp,x=0;
    cin>>n;

    temp=n;
    while(temp)
    {
        x = x*10+(temp%10);
        temp/=10;
    }
    cout<<x;
}