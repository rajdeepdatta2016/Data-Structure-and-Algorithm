#include<iostream>
#include<math.h>
using namespace std;
void checkPyth(int x, int y, int z)
{
    int temp = pow(x, 2)+pow(y, 2);
    if(pow(z, 2) == temp)
    {
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"Not Pythagorean Triplet";
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    checkPyth(x,y,z);
}