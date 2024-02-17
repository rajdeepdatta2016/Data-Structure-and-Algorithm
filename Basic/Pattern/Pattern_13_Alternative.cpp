#include<iostream>
using namespace std;
int main()
{
    int i,k,n;
    std::cout << "Enter Nos: " << std::endl;
    cin>>n;
    int space= (2*n-1)/2;
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=space; k++)
        {
            std::cout << "* ";
        }
        for(k=1; k<=2*i-1; k++)
        {
            if(k==1 || k==2*i-1)
                std::cout << "* ";
            else{
                std::cout << "  ";
            }
        }
        for(k=1; k<=space; k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
        space--;
    }
    space=0;
    for(i=n; i>=1; i--)
    {
        for(k=1; k<=space; k++)
        {
            std::cout << "* ";
        }
        for(k=1; k<=2*i-1; k++)
        {
            if(k==1 || k==2*i-1)
                std::cout << "* ";
            else{
                std::cout << "  ";
            }
        }
        for(k=1; k<=space; k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
        space++;
    }
}