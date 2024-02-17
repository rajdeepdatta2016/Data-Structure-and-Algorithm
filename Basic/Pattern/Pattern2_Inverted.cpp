#include<iostream>
using namespace std;
int main()
{
    int n,i,k;
    std::cout << "Enter No. of Rows: " << std::endl;
    cin>>n;
    for(i=n; i >= 1; i--)
    {
        for(k=1; k<=i; k++)
        {
            std::cout << "* ";
        }
        std::cout<<std::endl;
    }
}