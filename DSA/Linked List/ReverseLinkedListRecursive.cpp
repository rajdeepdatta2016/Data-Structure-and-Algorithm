#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

Node *reverseLinkedListRec(Node *head)
{
	if(head == NULL || head->next == NULL) return head;
	Node *nextHead = reverseLinkedListRec(head->next);
	head->next->next = head;
	head->next = NULL;
	return nextHead;
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
    head = reverseLinkedListRec(head);
    print(head);
}