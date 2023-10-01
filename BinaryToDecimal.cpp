#include<iostream>
using namespace std;
void findDec(int n)
{
    int ans = 0;
    int x = 1;
    while(n)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    cout<<"Decimal Number is  = "<<ans;
}
int main()
{
    int bin;
    cin>>bin;
    findDec(bin);
}