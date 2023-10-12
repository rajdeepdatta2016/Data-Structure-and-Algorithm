#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int a) {
    if(a<=1) {
        return false;
    }
    for(int i=2; i<=sqrt(a); i++) {
        if(a%i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int a;
    cin >> a;
    bool c = isPrime(a);
    if(c == true) cout << "The Number is Prime" << endl;
    else {
        cout << "The Number is Not Prime" <<endl;
    }
}