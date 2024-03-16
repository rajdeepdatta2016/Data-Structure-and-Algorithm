#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* deleteNode(Node* head, int pos) {
    if(head == NULL) return head;
	if(pos == 0) return head->next;
	Node* temp = head;
	int currPos = 0;
	while(currPos < pos-1 && temp != NULL) {
		currPos++;
		temp = temp->next;
	}
	if(temp == NULL || temp->next == NULL) {
		return head;
	}
	temp->next = temp->next->next;
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
    Node * head = takeInput();
    int pos;
    cin >> pos;
    head = deleteNode(head,  pos);
    print(head);
}