#include<bits/stdc++.h>
using namespace std;

class Students {
    private:
    int age;
    const int rollNumber;
    int &x; // Reference Variable of Age...
    public:

    // Initialization List...
    Students(int age, int rollNumber) : rollNumber(rollNumber), age(age), x(this->age) {}
    void print() {
        cout << age << " " << rollNumber << " "<< x << endl;
    }
};

int main() {
    int age, rollNumber;
    cin >> age >> rollNumber;
    Students s1(age, rollNumber);
    s1.print();
}