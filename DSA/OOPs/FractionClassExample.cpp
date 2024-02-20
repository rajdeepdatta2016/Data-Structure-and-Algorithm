#include<bits/stdc++.h>
using namespace std;

class Fraction {
    private:
    int numerator, denominator;
    public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    ~Fraction() {
        cout << "Thank You" << endl;
    }
    int getNumerator() {
        return numerator;
    }
    int getDenominator() {
        return denominator;
    }
    void setNumerator(int numerator) {
        this->numerator = numerator;
    }
    void setDenominator(int denominator) {
        this->denominator = denominator;
    }
    void print() {
        cout << numerator << "/" << denominator << endl;
    }
    void Add(Fraction const &f2) {
        int lcm = denominator*f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x*numerator + y*f2.numerator;
        numerator = num;
        denominator = lcm;
        simplify();
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
    Fraction obj1(10,20);
    Fraction obj2(11,20);
    obj1.Add(obj2);
    obj1.print();

    Fraction obj3(10,20);
    Fraction obj4(11,20);
    obj3.Multiply(obj4);
    obj3.print();
}