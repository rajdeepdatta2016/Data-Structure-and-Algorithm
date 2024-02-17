#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n;
    cin >> n;

    cout<<"Fibonacchi Seies is : "<<endl;
    for(int i=0; i<=n; i++)
    {
        cout<<a<<" ";
        b = a+b;
        a = b-a;
    }
}