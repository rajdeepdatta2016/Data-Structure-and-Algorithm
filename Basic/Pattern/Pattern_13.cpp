#include<iostream>
using namespace std;
int main()
{
    int i,k,n;
    std::cout << "Enter Nos: " << std::endl;
    cin>>n;
    int space=-1;
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=n-i+1; k++)
        {
            std::cout << "* ";
        }
        for(k=1; k<=space; k++)
        {
            std::cout << "  ";
        }
        for(k=1; k<=n-i+1; k++)
        {
            if(k==n-i+1 && i==1)
                continue;
            std::cout << "* ";
        }
        std::cout << std::endl;
        space+=2;
    }
    space = 2*n-3;
    for(i=n; i>=1; i--)
    {
        for(k=1; k<=n-i+1; k++)
        {
            std::cout << "* ";
        }
        for(k=1; k<=space; k++)
        {
            std::cout << "  ";
        }
        for(k=1; k<=n-i+1; k++)
        {
            if(k==n-i+1 && i==1)
                continue;
            std::cout << "* ";
        }
        std::cout << std::endl;
        space-=2;
    }
}