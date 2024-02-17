#include<iostream>
using namespace std;
int main()
{
    int i,k,n,x;
    std::cout << "Enter Rows: " << std::endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        x=i;
        for(k=1; k<=n+i-1; k++)
        {
            if(k<=n-i)
            {
                std::cout << "  ";
            }
            else if(k>=n)
            {
                std::cout <<x++<<" ";
            }
            else{
                std::cout <<x--<<" ";
            }
        }
        std::cout << std::endl;
    }
}