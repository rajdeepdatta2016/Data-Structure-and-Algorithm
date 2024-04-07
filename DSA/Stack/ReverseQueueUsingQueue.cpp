#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int>& q) {
    if(q.empty()) return;
    int data = q.front();
    q.pop();
    reverseQueue(q);
    q.push(data);
}

int main() {
    int n, data;
    cin >> n;
    queue<int> q;
    for(int i=0; i<n; i++) {
        cin >> data;
        q.push(data);
    }
    reverseQueue(q);
    for(int i=0; i<n; i++) {
        cout << q.front() << " ";
        q.pop();
    }
}