#include<iostream>
#include<queue>
using namespace std;

int main() {
    // Maximum Heap
    priority_queue<int> pq;
    pq.push(10);                // {10}
    pq.push(3);                 // {10, 3}
    pq.push(23);                // {23, 10, 3}
    pq.push(7);                 // {23, 10, 7, 3}
    pq.push(13);                // {23, 13, 10, 7, 3}
    pq.push(21);                // {23, 21, 13, 10, 7, 3}
    pq.push(9);                 // {23, 21, 13, 10, 9, 7, 3}
    pq.push(17);                // {23, 21, 17, 13, 10, 9, 7, 3}
    cout << pq.top() << endl;   // 23
    pq.pop();                   // {21, 17, 13, 10, 9, 7, 3}
    cout << pq.top() << endl;   // 21

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    } cout << endl;

    // Minimum heap...
    priority_queue<int, vector<int>, greater<int> > pq1;
    pq1.push(2);                // {2}
    pq1.push(3);                // {2, 3}
    pq1.push(11);               // {2, 3, 11}
    pq1.push(7);                // {2, 3, 7, 11}
    pq1.push(1);                // {1, 2, 3, 7, 11}
    cout << pq1.top() << endl;  // 1
    pq1.pop();                  // {2, 3, 7, 11}
    cout << pq1.top() << endl;  // 2
    while(!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    } cout << endl;
}

// In Priority Queue, The Largest values stays on the top/start and the smallest value stays on the buttom/end.
// Size, swap, empty functon same as others...