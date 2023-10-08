#include<iostream>
using namespace std;
int findSum(int n)
{
    int res = (n*(n+1))/2;
    return res;
}
int main()
{
    int n;
    cout<<"Enter Range: ";
    cin>>n;
    cout<<findSum(n);
}