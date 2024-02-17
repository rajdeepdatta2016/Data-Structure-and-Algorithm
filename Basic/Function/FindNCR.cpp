#include<iostream>
using namespace std;
int findFact(int a) {
    if(a <= 1) return 1;
    return (a * findFact(a-1));
}
int main() {
    int a, b;
    cin >> a >> b;
    int value = (findFact(a)) / (findFact(b) * findFact(a-b));
    cout << value;
}