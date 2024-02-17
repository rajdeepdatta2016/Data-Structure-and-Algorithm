#include<iostream>
using namespace std;
int main() 
{
    int a=0,b=1,x;
    cin >> x;

    while(true) {
        if(x > a) {
            b = a+b;
            a = b-a;
        }
        else if(a == x) {
            cout << "Yes" << endl;
            return 0;
        }
        else{
            break;
        }
    }
    cout << "No" << endl;
}