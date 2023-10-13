#include<iostream>
using namespace std;

int Fact(int n)
{
    if(n > 1)
        return n * Fact(n-1);
    else{
        return 1;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<"Factorial = "<<Fact(n);
    return 0;
}