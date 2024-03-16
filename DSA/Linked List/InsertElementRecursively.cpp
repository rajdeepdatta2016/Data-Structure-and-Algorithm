#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* insertNode(Node* head, int pos, Node* newNode) {
    if(pos > 1 && head == NULL) return head;
    if(head == NULL) return newNode;
    if(pos == 0) {
        newNode->next = head;
        return newNode;
    }
    head->next = insertNode(head->next, pos-1, newNode);
    return head;
}

void print(Node * head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
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

int main() {
    Node* head = takeInput();
    int el,pos;
    cin >> el >> pos;
    Node* newNode = new Node(el);
    head = insertNode(head, pos, newNode);
    print(head);
}