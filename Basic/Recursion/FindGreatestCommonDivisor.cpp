#include<iostream>
using namespace std;
int GCD(int a, int b)
{
    if(a == 0 || b == 0) {
        return a+b; // The sum of both are same as the Non-zero Number
    }
    else if(a == b) {
        return a; // a == b
    }
    
    // Finding the highest factor by Recursion and decreasing the values until both are same or one is zero
    else if(a > b) {
        return GCD(a-b,b); 
    }
    else{
        return GCD(a,b-a);
    }
}

// Main Function

int main() 
{
    int a,b,gcd;
    cin >> a >> b;

    gcd = GCD(a,b);
    cout << gcd << endl;
}