#include<iostream>
using namespace std;
int main()
{
    int n;
    std::cout << "Enter Rows: " << std::endl;
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        for(int k =1; k<=i; k++)
        {
            cout<<i<<" ";
        }
        std::cout << std::endl;
    }
}