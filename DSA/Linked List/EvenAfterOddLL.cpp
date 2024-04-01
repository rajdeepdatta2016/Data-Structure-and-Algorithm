#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node *evenAfterOdd(Node *head)
{
	Node* newHead = NULL;
	Node* tail = NULL;
	Node* temp = head;
	while(temp != NULL) {
		if(temp->data%2 == 1) {
			Node* newNode = new Node(temp->data);
			if(newHead == NULL) newHead = newNode;
			else tail->next = newNode;
			tail = newNode;
		}
		temp = temp->next;
	}
	temp = head;
	while(temp != NULL) {
		if(temp->data%2 == 0) {
			Node* newNode = new Node(temp->data);
			if(newHead == NULL) return head;
			else tail->next = newNode;
			tail = newNode;
		}
		temp = temp->next;
	}
    return newHead;
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
    head = evenAfterOdd(head);
    print(head);
}