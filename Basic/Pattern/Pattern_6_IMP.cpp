#include<iostream>
using namespace std;
int main()
{
    int n;
    std::cout << "Enter No: " << std::endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=i; k++)
        {
            std::cout << "* ";
        }
        int space = 2*n - 2*i;
        for(int l=1; l<=space; l++)
        {
            std::cout << "  ";
        }
        for(int k=1; k<=i; k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for(int i=n; i>=1; i--)
    {
        for(int k=1; k<=i; k++)
        {
            std::cout << "* ";
        }
        int space = 2*n - 2*i;
        for(int l=1; l<=space; l++)
        {
            std::cout << "  ";
        }
        for(int k=1; k<=i; k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}