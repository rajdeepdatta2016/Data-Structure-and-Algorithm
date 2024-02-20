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
    void getData() {
        cout << age << " " << rollNumber << endl;
    }
};

int main() {
    Student s1(10, 1001);

    // Copy Constructor...
    Student s2(s1);
    s2.getData();
    // Copy Constructor Dynamically...
    Student *s3 = new Student(s1);
    s3 -> getData();
    Student s4(*s3);
    s4.getData();

    // Copy Assignment Operator...
    Student s5(100,100);
    s5 = s1;
    s5.getData(); 

    // Copy Constructor Another Process...
    Student s6 = s4;
    s6.getData();
}