#include<bits/stdc++.h>
using namespace std;

class Students {
    private:
    int age, rollNumber;
    public:

    // Default Constructor...
    Students() {
        age = 20;
        rollNumber = 41;
    }

    // Parameterized Constructor...
    Students(int age, int rollNumber) {
        this->age = age;
        this->rollNumber = rollNumber;
    }

    // Getter Function...
    void getData() {
        cout << age << " " << rollNumber << endl;
    }
};

int main() {
    Students * s1 = new Students;
    s1 -> getData();
    Students * s2 = new Students(10, 20);
    s2 -> getData();
}