#include<bits/stdc++.h>
using namespace std;

class Polynomial {
    public:
    int *degCoeff;
    int capacity;
    // Default Constructor...
    Polynomial() {
        degCoeff = new int[5];
        capacity = 5;
        for(int i=0; i<capacity; i++) {
            degCoeff[i] = 0;
        }
    }
    // Copy Constructor...
    Polynomial(Polynomial const &p) {
        this->capacity = p.capacity;
        this->degCoeff = new int[this->capacity];
        for(int i=0; i<this->capacity; i++) {
            this->degCoeff[i] = p.degCoeff[i];
        }
    }
    // Copy Assignment Operator...
    void operator=(Polynomial const &p) {
        this->capacity = p.capacity;
        this->degCoeff = new int[this->capacity];
        for(int i=0; i<this->capacity; i++) {
            this->degCoeff[i] = p.degCoeff[i];
        }
    }
    // Setting Coefficient with respect to their degree...
    void setCoefficient(int degree, int coeff) {
        if(degree >= capacity) {
            int newCapacity = degree+1;
            int *newArr = new int[newCapacity];
            for(int i=0; i<newCapacity; i++) {
                newArr[i] = (i < capacity) ? degCoeff[i] : 0;
            }
            delete [] degCoeff;
            degCoeff = newArr;
            capacity = newCapacity;
        }
        degCoeff[degree] = coeff;
    }
    // "+" Operator Overloading...
    Polynomial operator+(Polynomial const &p) const {
        Polynomial result;
        result.capacity = max(capacity, p.capacity);
        result.degCoeff = new int[result.capacity];
        for(int i=0; i<result.capacity; i++) {
            result.degCoeff[i] = ((i<capacity) ? degCoeff[i] : 0) + ((i<p.capacity) ? p.degCoeff[i] : 0);
        }
        return result;
    }
    // "-" Operator Overloading...
    Polynomial operator-(Polynomial const &p) const {
        Polynomial result;
        result.capacity = max(capacity, p.capacity);
        result.degCoeff = new int[result.capacity];
        for(int i=0; i<result.capacity; i++) {
            result.degCoeff[i] = ((i<capacity) ? degCoeff[i] : 0) - ((i<p.capacity) ? p.degCoeff[i] : 0);
        }
        return result;
    }
    // "*" Operator Overloading...
    Polynomial operator*(Polynomial const &p) const {
        Polynomial result;
        result.capacity = capacity + p.capacity;
        result.degCoeff = new int[result.capacity];
        for(int i=0; i<result.capacity; i++) {
            result.degCoeff[i] = 0;
        }
        for(int i=0; i<capacity; i++) {
            for(int j=0; j<p.capacity; j++) {
                int coeff = degCoeff[i] * p.degCoeff[j];
                int deg = i+j;
                result.degCoeff[deg] += coeff;
            }
        }
        return result;
    }
    // Print Function...
    void print() {
        for(int i=0; i<capacity; i++) {
            if(degCoeff[i] != 0) cout << degCoeff[i] << "x" << i << " ";
        }
    }
};
int main() {
    int r1, r2, choice;
    cin >> r1;
    int * degree1 = new int[r1];
    int * coeff1 = new int[r1];
    for(int i=0;i < r1; i++) {
        cin >> degree1[i];
    }
    for(int i=0;i < r1; i++) {
        cin >> coeff1[i];
    }
    Polynomial first;
    for(int i = 0; i < r1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }

    cin >> r2;
    int * degree2 = new int[r2];
    int * coeff2 = new int[r2];
    for(int i=0;i < r2; i++) {
        cin >> degree2[i];
    }
    for(int i=0;i < r2; i++) {
        cin >> coeff2[i];
    }
    Polynomial second;
    for(int i = 0; i < r2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }

    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
}