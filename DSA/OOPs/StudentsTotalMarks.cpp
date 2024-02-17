#include<iostream>
using namespace std;
class A
{
    char id[20];
    int m1,m2,m3,m;
    public:
    void get()
    {
        cout<<"\nEnter Id:\n";
        cin>>id;
        cout<<"Enter Three Sub. Marks:\n";
        cin>>m1>>m2>>m3;
    }
    void cal()
    {
        m=m1+m2+m3;
        cout<<"\nStudents Id: "<<id<<"\nTotal Marks: "<<m;
    }
};
int main()
{
    A o;
    int i=0;
    while(i < 5)
    {
        o.get();
        o.cal();
        i++;
    }
    return 0;
}