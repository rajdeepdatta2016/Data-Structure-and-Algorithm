#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter Total Rows: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int j;
        x=i;
        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for(; j<=n; j++)
        {
            cout<<x--<<" ";
        }
        x=2;
        for(; j<n+i; j++)
        {
            cout<<x++<<" ";
        }
        cout<<endl;
    }
}