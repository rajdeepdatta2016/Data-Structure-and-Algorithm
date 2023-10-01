#include<iostream>
using namespace std;
void fib(int n)
{
    int a=0, b=1, temp;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        temp = a+b;
        a = b;
        b = temp;
    } 
}
int main()
{
    int range;
    cout<<"Enter Range: ";
    cin>>range;
    cout<<"Fibonacchi Series is "<<endl;
    fib(range);
    return 0;
}