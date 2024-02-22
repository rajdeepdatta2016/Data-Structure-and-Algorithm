#include<bits/stdc++.h>
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

    auto it = s.find(3);
    cout << *(it) << endl; 

    s.erase(7);             // {1 ,2, 3, 4}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1, it2);      // {1, 4}

    auto it3 = s.lower_bound(1);        // returns iterator of lower bound of 1...
    auto it4 = s.upper_bound(2);        // returns iterator of upper bound of 2...
}

// Don't contain duplicate values...
// Stores in sorted order...
// All fuction same as vector...