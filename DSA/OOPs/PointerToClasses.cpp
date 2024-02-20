#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public:
    void get()
    {
        cout<<"Enter Three Numbers:\n";
        cin>>a>>b>>c;
    }
    void show()
    {
        if(a>b && a>c)
        {
            cout<<"Largest Number is = "<<a;
        }
        else if(b>a && b> c)
        {
            cout<<"Largest Number is = "<<b;
        }
        else{
            cout<<"Largest Number is = "<<c;
        }
    }
};
int main()
{
    A o;
    // Dynamically Creating Objects...
    A *p = new A;
    p= &o;
    p->get();
    p->show();
    return 0;
}