#include<iostream>
using namespace std;
class A
{
    static int s,z;
    public:
    static void add(int x, int y)
    {
        s=x+y;
        cout<<"\n"<<s;
    }
    static void pro(int x, int y)
    {
        z=x*y;
        cout<<"\n"<<z;
    }
};
int A::s;
int A::z;
int main()
{
    A::add(54,26);
    A::pro(9,12);
    return 0;
}