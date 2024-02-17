#include<iostream>
using namespace std;
int main()
{
    int i,k,n;
    std::cout << "Enter Rows: " << std::endl;
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(k=1; k<=i; k++)
        {
            std::cout <<n-i+1<< " ";
        }
        std::cout << std::endl;
    }
}