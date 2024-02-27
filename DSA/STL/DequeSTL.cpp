#include<iostream>
#include<deque>
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
    for(int i=0; i<dq.size(); i++) cout << dq.at(i) << " ";
    cout << endl;

    cout << "Front = " << dq.front() << endl;
    cout << "Back = " << dq.back() << endl;
    if(dq.empty()) cout << "Deque is Empty" << endl;
    else cout << "Deque is Not Empty" << endl;
    // For Clearing the Deque...
    dq.erase(dq.begin(), dq.end());
    if(dq.empty()) cout << "Deque is Empty" << endl;
    else cout << "Deque is Not Empty" << endl;
    dq.push_back(1);
    dq.push_front(2);
    dq.clear();
    if(dq.empty()) cout << "Deque is Empty" << endl;
    else cout << "Deque is Not Empty" << endl;
}

// Rest Function same as vector...
// begin, end, rbegin, rend, clear, insert, size, swap, erase, empty...