#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

int main() {
    // Statically...
    Node n1(10);
    Node * head = &n1;
    Node n2(20);
    n1.next = &n2;
    Node n3(30);
    n2.next = &n3;
    cout << head->data << " " << n2.data << " " << n3.data << endl;

    // Dynamically...
    Node * n4 = new Node(40);
    Node * n5 = new Node(50);
    Node * n6 = new Node(60);

    n3.next = n4;
    n4->next = n5;
    n5->next = n6;
    delete n4;
    delete n5;
    delete n6;
}
