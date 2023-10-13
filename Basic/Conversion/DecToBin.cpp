#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int bin;
    int dec=0,i=0,bit;

    cin>>bin;

    while(bin != 0)
    {
        bit = bin%10;
        dec = dec + (bit * pow(2, i));
        i++;
        bin /= 10;
    }
    cout<<dec<<endl;
}