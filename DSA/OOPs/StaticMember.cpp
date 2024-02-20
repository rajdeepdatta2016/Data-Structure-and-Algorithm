#include<bits/stdc++.h>
using namespace std;

class Students {
    private:
    int rollNumber;
    int age;
    static int totalStudents;   // Static Variable/Member...
    public:
    Students(int age, int rollNumber) {
        this->age = age;
        this->rollNumber = rollNumber;
        totalStudents++;
    }
    int getAge() {
        return age;
    }
    int getRollNumber() {
        return rollNumber;
    }
    static int getTotalStudents() {     // Static Member Function...
        return totalStudents;
    }

};

// Initialize using Scope-Resolution Operator...
int Students :: totalStudents = 0;

int main() {
    Students s1(22, 1001);
    cout << s1.getAge() << " " << s1.getRollNumber() << " " <<  Students :: getTotalStudents() << endl;
    Students s2(19, 107);
    cout << s2.getAge() << " " << s2.getRollNumber() << " " << Students :: getTotalStudents() << endl;
}