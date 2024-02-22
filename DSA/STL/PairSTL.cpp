#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,char> a, pair<int,char> b) {
    return a.second < b.second;
}

int main() {
    // Declartion of Pairs...
    pair<int , char> p1;
    pair<int , char> p2(10, 'A');
    pair<int , char> p3 = make_pair(10, 'A');

    // Access of Pairs...
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;

    // Array of Pairs...
    vector<pair<int, char> > students;
    int n, roll_no;
    char section;
    cin >> n;

    // Taking Input...
    for(int i=0; i<n; i++) {
        cin >> roll_no >> section;
        students.push_back(make_pair(roll_no, section));
        // Error Due to Compiler...
        // students.push_back({roll_no, section});
    }

    for(int i=0; i<n; i++) {
        cout << "Student Name = " << students[i].first << " Roll No = " << students[i].second << endl;
    }

    sort(students.begin(), students.end());

    cout << endl << "After Sorting " << endl;
    for(int i=0; i<n; i++) {
        cout << "Student Name = " << students[i].first << " Roll No = " << students[i].second << endl;
    }
    cout << endl;

    // Comparison Of Pairs...
    pair<int , char> a(1, 'C'), b(2, 'A');
    cout << (a < b) << endl;

    // For Sorting Via Second Value...
    vector<pair<int , char> > students1;
    for(int i=0; i<n; i++) {
        cin >> roll_no >> section;
        students1.push_back(make_pair(roll_no, section));
    }

    sort(students1.begin(), students1.end(), comp);
    cout << endl << "After Sorting " << endl;
    for(int i=0; i<n; i++) {
        cout << "Student Name = " << students1[i].first << " Roll No = " << students1[i].second << endl;
    }
    cout << endl;

    
}