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
            tail->next = newNode;
        }
        tail = newNode;
        cin >> data;
    }
    return head;
}

int findLength(Node * head) {
    if(head == NULL) return 0;
    if(head -> next == NULL) return 1;
    return 1+findLength(head->next);
}

int main() {
    Node * head = takeInput();
    int length = findLength(head);
    cout << length;
}