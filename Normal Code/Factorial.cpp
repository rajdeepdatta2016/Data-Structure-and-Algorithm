#include<iostream>
using namespace std;
int Fact(int n)
{
    if(n>1)
        return n*Fact(n-1);
    else{
        return 1;
    }
}
int main()
{
    int a,n;
    cin>>n;
    a= Fact(n);
    cout<<a;
}