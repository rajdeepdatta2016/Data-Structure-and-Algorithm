#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* deleteNode(Node* head, int pos) {
    if(head == NULL) return head;
    if(pos == 0) return head->next;
    head->next = deleteNode(head->next,pos-1);
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
    int pos;
    cin >> pos;
    head = deleteNode(head,  pos);
    print(head);
}