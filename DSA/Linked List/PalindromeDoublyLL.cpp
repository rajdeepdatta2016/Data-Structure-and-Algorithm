#include<bits/stdc++.h>
using namespace std;
#include "Pair.cpp"

Node* findMid(Node* head) {
	Node* slow = head;
	Node* fast = head->next;
	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

bool palindromeDLL(Node* head){
	if(head == NULL || head -> next == NULL) return true;
	Node * tail = head->next;
	while(tail->next != NULL) tail = tail->next;
	Node* mid = findMid(head);
	while(head != tail) {
		if(head->data != tail->data) return false;
		if(head == mid || tail == mid) break;
		head = head->next;
		tail = tail->prev;
	}
	return true;
}

Pair takeInput() {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    cin >> data;
    while(data != -1) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
        }
        tail = newNode;
        cin >> data;
    }
    Pair ans(head,tail);
    return ans;
}

int main() {
    Pair head_tail = takeInput();
    if(palindromeDLL(head_tail.head)) cout << "DLL is Palindrome" << endl;
    else cout << "DLL is not Palindrome" << endl;
}