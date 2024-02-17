#include<iostream>
using namespace std;

// Defining Macro PI....
#define PI 3.14159

// Inline Function for Circle Area...
inline double CircleArea(int r) {
    return PI * r * r;
}

// Inline Function for Circle Circumference...
inline double CircleCircumference(int r) {
    return 2*PI*r;
}

// Driver Code...
int main() {
    int r;
    cin >> r;
    cout << "Circumference of the Circle is = " << CircleCircumference(r) << endl;
    cout << "Area of the Circle is = " << CircleArea(r) << endl;
}