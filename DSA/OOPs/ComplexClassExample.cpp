#include<bits/stdc++.h>
using namespace std;

class ComplexNumber {
    private:
    int real, imaginary;
    public:
    ComplexNumber(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    void plus(ComplexNumber const &c2) {
        real += c2.real;
        imaginary += c2.imaginary;
    }
    void multiply(ComplexNumber const &c2) {
        int tempReal = real;
        real = (real*c2.real) - (imaginary*c2.imaginary);
        imaginary = (tempReal*c2.imaginary) + (imaginary*c2.real);
    }
    void print() {
        cout << real << " + i" << imaginary << endl;
    }
};

int main() {
    int real1, real2, imaginary1, imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumber c1(real1, imaginary1);
    ComplexNumber c2(real2, imaginary2);

    int choices;
    cin >> choices;
    if(choices == 1) {
        c1.plus(c2);
        c1.print();
    } else {
        c1.multiply(c2);
        c1.print();
    }
}