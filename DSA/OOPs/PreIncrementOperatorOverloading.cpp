#include<bits/stdc++.h>
using namespace std;

class Fraction {
    int numerator, denominator;
    public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void simplify() {
        int gcd = 1;
        int n = min(numerator, denominator);
        for(int i=0; i<=n; i++) {
            if(numerator%i == 0 && denominator%i == 0) gcd = i;
        }
        numerator /= gcd;
        denominator /= gcd;
    }
    // Pre Increment...
    // Use Fraction& because we return it by reference, to avoid temporary buffer...
    Fraction& operator++() {
        numerator = numerator+denominator;
        simplify();
        return *this;
    }
    void print() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(10, 15);
    Fraction f2 = ++(++(++f1));
    f1.print();
    f2.print();
}