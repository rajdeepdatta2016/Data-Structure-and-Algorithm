#include<iostream>
using namespace std;
void printCounting(int a) {
    for(int i=1; i<=a; i++) {
        cout << i << " ";
    }
}
int main() {
    int a;
    cin >> a;
    printCounting(a);
}