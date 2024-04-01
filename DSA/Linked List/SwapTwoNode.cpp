#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node *swapNodes(Node *head, int i, int j)
{
    int x=0, y=0;
	Node* c1 = head;
	Node* c2 = head;
	Node* p1 = NULL;
	Node* p2 = NULL;
	while(c1 != NULL && x < i) {
		c1 = c1->next;
		x++;
		if(p1 == NULL) p1 = head;
		else p1 = p1->next;
	}
	while(c2 != NULL && y < j) {
		c2 = c2->next;
		y++;
		if(p2 == NULL) p2 = head;
		else p2 = p2->next;
	}
	if(i == 0 || j == 0) {
		Node* temp = c1->next;
		c1->next = c2->next;
		c2->next = temp;
		p2->next = c1;
		if(head == c1) head = c2;
		else head = c1;
	} else {
		Node* temp = c1->next;
		c1->next = c2->next;
    	if(c1 == p2) {
        	c2->next = c1;
    	} else {
        	c2->next = temp;
			p2->next = c1;
    	}
		p1->next = c2;
	}
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
    Node* head = takeInput();
    int m, n;
    cin >> m >> n;
    head = swapNodes(head, m, n);
    print(head);
}