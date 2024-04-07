#include<bits/stdc++.h>
using namespace std;
#include "QueueLL.h"

int main() {
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout << q.front() << endl;
    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl << endl;

    Queue<char> q2;
    q2.enqueue(65);
    q2.enqueue(66);
    q2.enqueue(67);
    q2.enqueue(68);
    q2.enqueue(69);
    cout << q2.front() << endl;
    cout << q2.dequeue() << endl;
    cout << q2.dequeue() << endl;
    cout << q2.dequeue() << endl;
    cout << q2.dequeue() << endl;
    cout << q2.dequeue() << endl;
    cout << q2.dequeue() << endl;
    q2.enqueue(100);
    cout << q2.dequeue() << endl;
    cout << q2.getSize() << endl;
    cout << q2.isEmpty() << endl;
}