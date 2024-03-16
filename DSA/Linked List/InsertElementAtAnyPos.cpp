#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* insertElement(Node * head, int data, int i) {
    Node * newNode = new Node(data);
    if(i == 0) {
        newNode->next = head;
        return newNode;
    }
    int count = 0;
    Node * temp = head;
    while(count < i-1 && temp != NULL) {
        count++;
        temp=temp->next;
    }
    if(temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
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
    Node * head = takeInput();
    int pos, val;
    cout << "Enter Value: ";
    cin >> val;
    cout << "Enter Position: ";
    cin >> pos;
    head = insertElement(head, val, pos);
    print(head);
}