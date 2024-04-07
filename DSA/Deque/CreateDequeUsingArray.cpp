#include<bits/stdc++.h>
using namespace std;
#include "DequeArr.h"

int main() {
    Deque d(5);
    d.insertFront(10);
    d.insertRear(70);
    cout << d.getFront() << endl;
    cout << d.getRear() << endl;
    d.insertFront(20);
    d.insertRear(90);
    cout << d.getFront() << endl;
    cout << d.getRear() << endl;
    d.deleteFront();
    d.deleteFront();
    cout << d.getFront() << endl;
    cout << d.getRear() << endl;
    d.deleteRear();
    d.deleteRear();
    cout << d.getFront() << endl;
    cout << d.getRear() << endl;
}