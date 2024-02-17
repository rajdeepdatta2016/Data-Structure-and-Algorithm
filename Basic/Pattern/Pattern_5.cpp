#include<iostream>
using namespace std;
int main()
{
    int n, x=1;
    std::cout << "Enter Total Rows: " << std::endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=i; k++)
        {
            std::cout <<x++<<" ";
        }
        std::cout << std::endl;
    }
}