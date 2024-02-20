#include<bits/stdc++.h>
using namespace std;

class Students {
    private:
    int age;
    public:
    char *name;
    Students(char* name, int age) {
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->age = age;
    }
    Students(Students const &s) {
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name, s.name);
        this->age = s.age;
    }
    void print() {
        cout << name << " " << age << endl;
    }
};

int main() {
    char name[1000];
    int age;
    cin >> name >> age;
    Students s1(name, age);
    Students s2(s1);
    s2.name[0] = 'T';
    s1.print();
    s2.print();
}