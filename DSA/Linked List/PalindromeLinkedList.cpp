#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

// Slow Pointer & Fast Pointer Method for finding Mid of the Linked List...
Node* getMidList(Node* head) {
	Node* slow = head;
	Node* fast = head;
	while(fast->next != NULL && fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

// Reverse Linked List after mid Using prev and next...
Node* reverseList(Node* currNode) {
	Node* prev = NULL;
	Node* next = NULL;
	while(currNode != NULL) {
		next = currNode->next;
		currNode->next = prev;
		prev = currNode;
		currNode = next;
	}
	return prev;
}

bool isPalindrome(Node *head)
{
	if(head == NULL || head->next == NULL) return true;
	Node* mid = getMidList(head);                           // Finds the middle of the Linked List...
	Node* revHead = reverseList(mid);                       // Reverse the Linked List after mid...
	while(head != NULL && revHead != NULL) {
		if(head->data != revHead->data) return false;
		head = head->next;
		revHead = revHead->next;
	}
	return true;
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
    Node* head = takeInput();
    if(isPalindrome(head)) cout << "Linked List is Palindrome" << endl;
    else cout << "Linked List is not Palindrome" << endl;
}