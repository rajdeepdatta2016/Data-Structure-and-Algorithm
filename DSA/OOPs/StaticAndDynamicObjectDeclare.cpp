#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
    int rollNo;
    int age;
    public:
    void setData() {
        cin >> rollNo >> age;
    }
    void getData() {
        cout << rollNo << " " << age;
    }
};

int main() {
    // // Create Object Statically...
    // Student s1;
    // cin >> s1.age >> s1.rollNo;
    // cout << s1.age << " " << s1.rollNo << endl;
    // // Create Object Dynamically...
    // Student * s2 = new Student;
    // cin >> s2->age >> s2->rollNo;
    // cout << s2->age << " " << s2->rollNo << endl;

    Student s1;
    s1.setData();
    s1.getData();
}