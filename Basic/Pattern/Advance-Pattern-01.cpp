#include<iostream>
using namespace std;
int main()
{
    int range,randm;
    cout<<"Enter Range: "<<endl;
    cin>>range;

    for(int i=0; i<range; i++)
    {
        randm = 1;
        for(int j=0; j<range-i; j++)
        {
            cout<<randm<<" ";
            randm++;
        }
        cout<<endl;
    }
}