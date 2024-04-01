#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

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
            newNode->next = head;
            tail->next = newNode;
        }
        tail = newNode;
        cin >> data;
    }
    return head;
}

void print(Node * head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
        if(temp == head) break;
    }
    cout << endl;
}

Node * insertStart(Node* head, int data) {
    Node* newNode = new Node(data);
    Node* tail = head->next;
    while(tail->next != head) {
        tail = tail->next;
    }
    tail->next = newNode;
    newNode->next = head;
    return newNode;
}

void deleteElementExceptHead(Node* head, int data) {
    Node* temp = head->next;
    while(temp->next != head && temp->next->data != data) {
        temp = temp->next;
    }
    temp->next = temp->next->next;

}

void insertEnd(Node* head, int data) {
    Node* temp = head->next;
    while(temp->next != head) temp = temp->next;
    Node* newNode = new Node(data);
    newNode->next = head;
    temp->next = newNode;
}

Node* deleteHead(Node* head) {
    Node* newHead = head->next;
    Node* tail = head->next;
    while(tail->next != head) tail = tail->next;
    tail->next = newHead;
    return newHead;
}

int main() {
    Node * head = takeInput();
    int element;
    cin >> element;
    head = insertStart(head, element);
    print(head);
    head = deleteHead(head);
    print(head);
    cin >> element;
    insertEnd(head, element);
    print(head);
    cin >> element;
    deleteElementExceptHead(head, element);
    print(head);
}