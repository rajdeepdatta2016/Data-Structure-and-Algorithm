#include<bits/stdc++.h>
using namespace std;

class Fraction {
    private:
    int numerator, denominator;
    public:
    Fraction() {}

    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    ~Fraction() {
        cout << "Thank You" << endl;
    }
    
    void print() {
        cout << numerator << "/" << denominator << endl;
    }
    
    Fraction Add(Fraction const &f2) {
        int lcm = denominator*f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x*numerator + y*f2.numerator;
        Fraction fNew(num, lcm);
        fNew.simplify();
        return fNew;
    }

    Fraction operator+(Fraction const &f2) const {    // Overloading '+' Operator...
        int lcm = denominator*f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x*numerator + y*f2.numerator;
        Fraction fNew(num, lcm);
        fNew.simplify();
        return fNew;
    }

    Fraction operator*(Fraction const &f2) const {    // Overloading '*' Operator...
        int d = denominator * f2.denominator;
        int n = numerator * f2.numerator;
        Fraction fNew(n, d);
        fNew.simplify();
        return fNew;
    }

    bool operator==(Fraction const f2) const {
        if(numerator == f2.numerator && denominator == f2.denominator) return true;
        else return false;
    }
    
    void Multiply(Fraction const &f2) {
        this->denominator = this->denominator*f2.denominator;
        this->numerator = this->numerator*f2.numerator;
        simplify();
    }
    
    void simplify() {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for(int i=0; i<=j; i++) {
            if(this->numerator%i == 0 && this->denominator%i == 0) gcd = i;
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }
};
int main() {
    Fraction f1(10,20);
    Fraction f2(11,20);
    Fraction f3 = f1.Add(f2);   // Normal Adding...
    f3.print();
    Fraction f4 = f1 + f2;      // Operator Overloading...
    f4.print();
    Fraction f5 = f1 * f2;      // Operator Overloading...
    f5.print();
    int isEqual = f1 == f2;
    if(isEqual) cout << "Both are Equal" << endl;
    else cout << "Both are Not Equal" << endl;
}