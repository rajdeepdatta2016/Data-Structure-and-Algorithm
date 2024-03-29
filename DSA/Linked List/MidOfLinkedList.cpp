#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

int findMid(Node* head) {
    Node* fast = head->next;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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
    Node * head = takeInput();
    int mid = findMid(head);
    cout << mid << endl;
}