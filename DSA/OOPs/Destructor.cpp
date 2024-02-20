#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
    int age, rollNumber;
    public:
    Student(int age, int rollNumber) {
        this->age = age;
        this->rollNumber = rollNumber;
    }
    // Destructor...
    ~Student() {
        cout << "Destructor is Called" << endl;;
    }
    void getData() {
        cout << age << " " << rollNumber << endl;
    }
};

int main() {
    Student s1(10, 1001);
    s1.getData();
    Student * s2 = new Student(s1);
    s2->getData();
    // Deallocating s2, which is dynamically created...
    delete s2;
}