#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void get1()
    {
        cout<<"\nEnter 1st No:\n";
        cin>>a;
    }
};
class B: public A
{
    protected:
    int b;
    public:
    void get2()
    {
        cout<<"Enter 2nd No:\n";
        cin>>b;
    }
};
class C: public B
{
    int s;
    public:
    void cal1()
    {
        s=a+b;
        cout<<"Sum = "<<s;
    }
};
class D: public B
{
    int m;
    public:
    void cal2()
    {
        m=a*b;
        cout<<"Multiplication = "<<m;
    }
};
int main()
{
    C o1;
    o1.get1();
    o1.get2();
    o1.cal1();
    D o2;
    o2.get1();
    o2.get2();
    o2.cal2();
    return 0;
}