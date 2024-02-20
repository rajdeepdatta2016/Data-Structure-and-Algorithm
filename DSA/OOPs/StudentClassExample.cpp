#include<bits/stdc++.h>
using namespace std;

class Students {
    private:
    char *name;
    int age;
    public:
    Students(char* name, int age) {
        // Shallow Copy...
        // this->name = name;

        // Deep Copy...
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->age = age;
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
    s1.print();
    cin >> name >> age;
    Students s2(name, age);
    s2.print();
    s1.print();
}