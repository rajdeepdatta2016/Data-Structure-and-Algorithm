#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    s.insert(2);            // {2}
    s.insert(3);            // {2, 3}
    s.insert(7);            // {2, 3, 7}
    s.insert(1);            // {1, 2, 3, 7}
    s.insert(2);            // {1, 2, 3, 7}
    s.insert(2);            // {1, 2, 3, 7}
    s.insert(4);            // {1, 2, 3, 4, 7}
    s.insert(11);           // {1, 2, 3, 4, 7, 11}
    s.insert(5);            // {1, 2, 3, 4, 5, 7, 11}
    s.insert(12);           // {1, 2, 3, 4, 5, 7, 11, 12}

    for(auto i : s) cout << i << " ";
    cout << endl;
    set<int>::iterator itr = s.find(7);
    for(auto it = itr; it != s.end(); it++) cout << *(it) << " ";

    set<int>::iterator it = s.find(3);
    cout << *(it) << endl; 

    s.erase(7);             // {1 ,2, 3, 4, 5, 11, 12}
    for(auto i : s) cout << i << " ";
    cout << endl;

    set<int>::iterator i = s.begin();
    i++;
    s.erase(i);             // {1, 3, 4, 5, 11, 12}
    for(auto i : s) cout << i << " ";
    cout << endl;

    set<int>::iterator it2 = s.find(4);
    set<int>::iterator it3 = s.find(12);
    s.erase(it2, it3);      // {1, 3, 12}
    for(auto i : s) cout << i << " ";
    cout << endl;

    cout << "Is 3 Present in Set => " << s.count(3) << endl;

    set<int>::iterator it4 = s.lower_bound(1);        // returns iterator of lower bound of 1...
    set<int>::iterator it5 = s.upper_bound(2);        // returns iterator of upper bound of 2...
}

// Don't contain duplicate values...
// Stores in sorted order...
// All fuction same as vector...
// Insert Complexity => O(logn)...