#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* NextLargeNumber(Node *head) {
    Node* tail = head;
    while(tail->next != NULL) tail = tail->next;
    while(tail->data+1 == 10 && tail != head) {
        tail->data = 0;
        Node* temp = head;
        while(temp->next != tail) temp = temp->next;
        tail = temp;
    }
    tail->data += 1;
    if(tail->data == 10) {
        tail->data = 0;
        Node* newNode = new Node(1);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node* takeInput() {
    int data;
    cin >> data;
    Node * head = NULL;
    Node * tail = NULL;
    while(data != -1) {
        Node * newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
        }
        else {
            tail->next = newNode;
        }
        tail = newNode;
        cin >> data;
    }
    return head;
}

void print(Node * head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main() {
    Node* head = takeInput();
    head = NextLargeNumber(head);
    print(head);
}