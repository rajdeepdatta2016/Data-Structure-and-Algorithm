#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

void createCycle(int pos, Node* head) {
    if(pos == -1) return;
    Node * tail = head;
    Node * temp = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }
    while(pos--) { 
        temp = temp->next;
    }
    tail->next = temp;
}

Node* takeInput() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cin >> data;
    while(data != -1) {
        Node* newNode = new Node(data);
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

bool checkCycle(Node* head) {
    if(head == NULL || head->next == NULL) return false;
    Node *slow = head;
    Node *fast = head->next;
    while(slow != fast) {
        if(fast == NULL || fast->next == NULL) return false;
        fast = fast->next->next;
        slow = slow->next;
    }
    return true;
}

int main() {
    Node * head = takeInput();
    int pos;
    cin >> pos;
    createCycle(pos, head);
    if(checkCycle(head)) {
        cout << "Cycle is present" << endl;
    } else {
        cout << "Cycle is not present" << endl;
    }
}