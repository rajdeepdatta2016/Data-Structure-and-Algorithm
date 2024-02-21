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
            if(numerator%i==0 && denominator%i==0) gcd = i;
        }
        numerator /= gcd;
        denominator /= gcd;
    }

    // Post Increment...
    // In Post Increment (i++)++ not allowed...
    Fraction operator++(int) {
        Fraction fNew(numerator, denominator);
        this->numerator += denominator;
        simplify();
        fNew.simplify();
        return fNew;
    }
    void print() {
        cout << numerator << " " << denominator << endl;
    }
};

int main() {
    Fraction f1(10, 15);
    Fraction f2 = f1++;
    f1.print();
    f2.print();
}