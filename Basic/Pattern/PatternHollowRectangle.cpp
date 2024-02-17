#include<iostream>
using namespace std;
int main()
{
    int row, col;
    std::cout << "Enter Rows: " << std::endl;
    cin>>row;
    std::cout << "Enter Columns: " << std::endl;
    cin>>col;
    for(int i=1; i<=row; i++)
    {
        for(int k=1; k<=col; k++)
        {
            if(i == 1 || i == row || k==1 || k==col)
            {
                std::cout << "* ";
            }
            else{
                std::cout << "  ";
            }
        }
        cout<<endl;
    }
}