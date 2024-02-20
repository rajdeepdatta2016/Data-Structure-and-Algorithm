#include<iostream>
using namespace std;
class A
{
    private:
    int a,b;
    public:
    void get(int x, int y) {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"\nSum = "<<a+b;
    }
};
class B
{
    private:
    int c,d;
    public:
    void get(int x, int y)
    {
        c=x;
        d=y;
    }
    void show()
    {
        cout<<"\nMultiplication = "<<c*d;
    }
    A o1;
};
int main()
{
    B o2;
    o2.o1.get(5,10);
    o2.o1.show();
    o2.get(7,9);
    o2.show();
    return 0;
}