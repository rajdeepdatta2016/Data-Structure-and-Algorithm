#include<iostream>
using namespace std;

void findOnes(int a, int b) {
    int count = 0;
    while(a != 0) {
        if(a&1) count++;
        a >>= 1;
    }
    while(b != 0) {
        if(b&1) count++;
        b >>= 1;
    }
    cout << count;
}

int main() {
    int a, b;
    cin >> a >> b;
    findOnes(a,b);
    return 0;
}