#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n < 2)
    {
        cout<<n<<" is not Prime";
    }
    else{
        bool x = true;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                x = false;
                break;
            }
        }
        if(x == true)
            cout<<n<<" is Prime";
        else{
            cout<<n<<" is not prime";
        }
    }
}