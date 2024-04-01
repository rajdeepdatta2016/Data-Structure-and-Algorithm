#include<bits/stdc++.h>
using namespace std;
#include "DoublyNode.cpp"

class Pair {
    public:
    Node* head;
    Node* tail;
    Pair(Node* head, Node* tail) {
        this->head = head;
        this->tail = tail;
    }
};

Pair takeInput() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cin >> data;
    while(data != -1) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
        } else {
            newNode->prev = tail;
            newNode->next = head;
            head->prev = newNode;
            tail->next = newNode;
        }
        tail = newNode;
        cin >> data;
    }
    Pair ans(head,tail);
    return ans;
}

void print(Pair head_tail) {
    Node* head = head_tail.head;
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
        if(head == head_tail.head) break;
    }
    cout << endl;
    Node* tail = head_tail.tail;
    while(tail != NULL) {
        cout << tail->data << " ";
        tail = tail->prev;
        if(tail == head_tail.tail) break;
    }
    cout << endl;
}

int main() {
    Pair head_tail = takeInput();
    print(head_tail);
}