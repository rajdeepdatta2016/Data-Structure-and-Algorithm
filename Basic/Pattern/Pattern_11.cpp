#include<iostream> 
using namespace std;
int main()
{
    int i,k,n;
    std::cout << "Enter Rows: " << std::endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(k=1; k<n+i; k++)
        {
            if(k <= n-i)
            {
                std::cout << "  ";
            }
            else{
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
    for(i=n; i>=1; i--)
    {
        for(k=1; k<n+i; k++)
        {
            if(k <= n-i)
            {
                std::cout << "  ";
            }
            else{
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}