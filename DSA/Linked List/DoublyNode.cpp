#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node* prev;
    Node* next;
    int data;
    Node(int data) {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};