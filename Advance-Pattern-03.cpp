#include<iostream>
using namespace std;
int main()
{
    int n,space;
    cout<<"Enter Range: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        space=n-i;
        for(int j=0; j<=2*n-i; j++)
        {
            if(space)
            {
                cout<<"  ";
                space--;
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}