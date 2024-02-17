#include<iostream>
using namespace std;
int main()
{
    int i,k,n;
    std::cout << "Enter Rows: " << std::endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=i; k++)
        {
            if((i+k)%2 == 0)
            {
                std::cout << "1 ";
            }
            else{
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }
}