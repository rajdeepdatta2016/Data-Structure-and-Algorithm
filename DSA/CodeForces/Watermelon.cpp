#include<iostream>
using namespace std;
void findDividePossible(int n) {
    if(n%2 == 0 && n>2) cout << "YES";
    else cout << "NO";
}

int main() {
    int n;
    cin >> n;
    findDividePossible(n);
}