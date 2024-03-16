#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

void findNthElement(Node* head, int i) {
    int pos = -1;
    Node * temp = head;
    if(temp != NULL) pos = 0;
    while(pos < i && temp != NULL) {
        pos++;
        temp = temp->next;
    }
    if(pos == i) cout << temp->data << endl;
}

Node * takeInput() {
    int data;
    cin >> data;
    Node * head = NULL;
    Node * tail = NULL;
    while(data != -1) {
        Node * newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
        cin >> data;
    }
    return head;
}

int main() {
    Node * head = takeInput();
    int n;
    cin >> n;
    findNthElement(head, n);
}