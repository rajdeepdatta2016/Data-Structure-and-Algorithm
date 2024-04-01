#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node *rotate(Node *head, int k) {
    Node* tail = head;
    Node* temp = head;
    int count = 1, pos = 1;
    while (tail->next != NULL) {
      tail = tail->next;
      count++;
    }
    if(k == count) return head;
    if(k > count) k = k % count;
    int change = count - k;
    while(pos < change) {
        temp = temp->next;
        pos++;
    }
    tail->next = head;
    head = temp->next;
    temp->next = NULL;
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
    int x;
    cin >> x;
    head = rotate(head, x);
    print(head);
}