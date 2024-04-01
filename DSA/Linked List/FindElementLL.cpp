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

int findNodeRec(Node *head, int n)
{
	int pos = 0;
	while(head != NULL) {
		if(head->data == n) return pos;
		pos++;
		head = head->next;
	}
	return -1;
}

int main() {
    Node* head = takeInput();
    int pos, el;
    cin >> el;
    pos = findNodeRec(head, el);
    cout << pos << endl;
}