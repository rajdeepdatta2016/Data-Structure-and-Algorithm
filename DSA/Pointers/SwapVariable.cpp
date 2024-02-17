#include <iostream>
using namespace std;

// Swap A and B via Pointers...
void swap(int *a,int *b)
{
	int temp = *a;
    *a = *b;
    *b = temp;
}

// Driver Code...
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        swap(&a , &b);
        cout<<a<<" "<<b;
        cout<<endl;
    }
}