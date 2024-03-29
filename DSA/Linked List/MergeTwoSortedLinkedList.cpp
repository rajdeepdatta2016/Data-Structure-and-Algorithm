#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* mergeTwoSortedLinkedList(Node* head1, Node* head2) {
    Node* finalHead = NULL;
    Node* finalTail = NULL;
    while(head1 != NULL && head2 != NULL) {
        if(head1 -> data < head2 -> data) {
            if(finalHead == NULL) {
                finalHead = head1;
            } else {
                finalTail->next = head1;
            }
            finalTail = head1;
            head1 = head1->next;
        } else {
            if(finalHead == NULL) {
                finalHead = head2;
            } else {
                finalTail->next = head2;
            }
            finalTail = head2;
            head2 = head2->next;
        }
    }
    if(head1 == NULL) {
        finalTail->next = head2;
    }
    if(head2 == NULL) {
        finalTail->next = head1;
    }
    return finalHead;
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

void print(Node * head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int main() {
    Node* head1 = takeInput();
    Node* head2 = takeInput();
    Node* head3 = mergeTwoSortedLinkedList(head1, head2);
    print(head3);
}