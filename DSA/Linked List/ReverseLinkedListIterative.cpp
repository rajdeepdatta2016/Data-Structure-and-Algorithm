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

Node * reverseLinkedListRec(Node* head) {
    Node* prev = NULL;
	Node* next = NULL;
	while(head != NULL) {
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	return prev;
}

int main() {
    Node* head = takeInput();
    head = reverseLinkedListRec(head);
    print(head);
}

// TC => O(n)...
// TC => O(1)...