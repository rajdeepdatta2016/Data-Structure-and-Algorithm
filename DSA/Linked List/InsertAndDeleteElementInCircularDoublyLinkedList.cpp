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
Node* insertStart(Pair head_tail, int data) {
    Node* newNode = new Node(data);
    newNode->prev = head_tail.tail;
    newNode->next = head_tail.head;
    head_tail.head->prev = newNode;
    head_tail.tail->next = newNode;
    return newNode;
}

Node* insertEnd(Pair head_tail, int data) {
    Node* newNode = new Node(data);
    newNode->prev = head_tail.tail;
    newNode->next = head_tail.head;
    head_tail.head->prev = newNode;
    head_tail.tail->next = newNode;
    return newNode;
}

void deleteElementExceptHeadTail(Pair head_tail, int data) {
    Node* temp = head_tail.head->next;
    while(temp != head_tail.tail && temp->next->data != data) temp = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
}

Pair deleteHeadTail(Pair head_tail) {
    Node* head = head_tail.head;
    Node* tail = head_tail.tail;
    head->next->prev = tail->prev;
    tail->prev->next = head->next;
    Pair ans(head->next,tail->prev);
    return ans;
}

int main() {
    Pair head_tail = takeInput();
    int data;
    cin >> data;
    head_tail.head = insertStart(head_tail, data);
    print(head_tail);
    cin >> data;
    head_tail.tail = insertEnd(head_tail, data);
    print(head_tail);
    cin >> data;
    deleteElementExceptHeadTail(head_tail, data);
    print(head_tail);
    head_tail = deleteHeadTail(head_tail);
    print(head_tail);
}