#include<iostream>
using namespace std;
int main()
{
    int n;
    std::cout << "Enter Rows: " << std::endl;
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        for(int k =1; k<=n; k++)
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