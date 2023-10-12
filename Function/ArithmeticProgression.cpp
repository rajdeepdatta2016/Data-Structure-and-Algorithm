#include<iostream>
using namespace std;
int findNthTerm(int a1, int d, int n) {
    int nthTerm = a1+d*(n-1);
    return nthTerm;
}
int main() {
    int firstTerm, commonDif, nthPos;
    cin >> firstTerm >> commonDif >> nthPos;
    int ans = findNthTerm(firstTerm, commonDif, nthPos);
    cout << "Answer = " << ans;
}