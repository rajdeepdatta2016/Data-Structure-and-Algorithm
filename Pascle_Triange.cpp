#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else{
        return 1;
    }
}
int main()
{
    int size;
    cout<<"Enter Row Nos: ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}