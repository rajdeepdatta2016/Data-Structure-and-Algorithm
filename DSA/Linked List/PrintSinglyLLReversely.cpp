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

void printReverse(Node *head)
{
	if(head == NULL) return;
	printReverse(head->next);
	cout << head->data<< " ";
	return;
}

int main() {
    Node* head = takeInput();
    printReverse(head);
}