#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l1;
    l1.push_back(10);       // {10}
    l1.push_back(20);       // {10, 20}
    l1.push_front(30);      // {30, 10, 20}
    l1.push_front(40);      // {40, 30, 10, 20}
    for(auto it : l1) {
        cout << it << " ";
    }
    cout << endl;
}

// Rest Function same as vector...
// begin, end, rbegin, rend, clear, insert, size, swap, erase, empty...