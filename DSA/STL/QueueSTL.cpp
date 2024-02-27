#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q1;
    q1.push(10);                    // {10}
    q1.push(20);                    // {10, 20}
    q1.push(30);                    // {10, 20, 30}
    q1.push(30);                    // {10, 20, 30, 30}
    q1.push(50);                    // {10, 20, 30, 30, 50}
    cout << q1.front() << endl;     // 10...
    cout << q1.back() << endl;      // 50...
    q1.pop();                       // {20, 30, 40, 50}
    cout << q1.front() << endl;     // 20...
    cout << q1.back() << endl;      // 50...
    if(q1.empty()) cout << "Queue is Empty" << endl;
    else cout << "Queue is not Empty" << endl;
    cout << "Size of Queue is = " << q1.size() << endl;
}

// Queue maintains FIFO (First In First Out)...
// Size, swap, empty like Stack...
// All Operation Complexity = O(1)...