#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,temp,x=0;
    cin>>n;

    temp=n;
    while(temp)
    {
        int r = temp%10;
        x += pow(r,3);
        temp/=10;
    }
    if(n == x)
        cout<<"Armstrong";
    else{
        cout<<"Not Armstrong";
    }
}