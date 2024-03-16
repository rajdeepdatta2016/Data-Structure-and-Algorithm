#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

int findNode(Node *head, int n){
    Node * temp = head;
    int index = -1;
    while(temp != NULL) {
        index++;
        if(temp->data == n) return index;
        temp = temp->next;
    }
    return -1;
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
    int n;
    cin >> n;
    int index = findNode(head, n);
    cout << index;
}