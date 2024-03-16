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

void print(Node * head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

void printRecursion(Node * head) {
    cout << head->data << " ";
    if(head->next == NULL) return;
    else printRecursion(head->next);
}

int main() {
    Node * head = takeInput();
    cout << "Print through loop: " << endl;
    print(head);
    cout << "Print through recursion: " << endl;
    printRecursion(head);
}

// TC => O(n)...
// SC => O(n)...