#include<bits/stdc++.h>
using namespace std;
#include "DoublyNode.cpp"

class Pair {
    public:
    /// @brief 
    Node* head;
    Node* tail;
    Pair(Node* head, Node* tail) {
        this->head = head;
        this->tail = tail;
    }
};