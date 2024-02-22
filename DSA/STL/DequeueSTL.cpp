#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);        // {1}
    dq.push_back(2);        // {1, 2}
    dq.push_front(3);       // {3, 1, 2}
    dq.push_front(4);       // {4, 3, 1, 2}
    dq.pop_back();          // {4, 3, 1}
    dq.pop_front();         // {3, 1}
    for(auto it : dq) {
        cout << it << " ";
    }
    cout << endl;
}

// Rest Function same as vector...
// begin, end, rbegin, rend, clear, insert, size, swap, erase, empty...