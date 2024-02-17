#include<iostream>
using namespace std;
class A
{
    protected:
    int a,b;
    public:
    void get()
    {
        cout<<"\nEnter 1st No:\n";
        cin>>a;
        cout<<"Enter 2nd Number:\n";
        cin>>b;
    }
};
class B: public A
{
    int i,r1;
    public:
    void cal1()
    {
        r1=1;
        for(i=1; i<=b; i++)
        {
            r1=r1*a;
        }
        cout<<"Power = "<<r1;
    }
};
class C: public A
{
    int i;
    public:
    void cal2()
    {
        for(i=1; i<=b; i++)
        {
            cout<<a<<" * "<<i<<" = "<<a*i<<"\n";
        }
    }
};
int main()
{
    B o1;
    o1.get();
    o1.cal1();
    C o2;
    o2.get();
    o2.cal2();
    return 0;
}