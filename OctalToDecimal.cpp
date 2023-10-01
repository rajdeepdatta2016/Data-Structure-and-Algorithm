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
        x *= 8;
        n /= 10;
    }
    cout<<"The Decimal No is = "<<ans;
}
int main()
{
    int n;
    cin>>n;

    findDec(n);
}