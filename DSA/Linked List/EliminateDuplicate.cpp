#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

Node* remove(Node* head) {
	Node * a = head->next;
	head->next = head->next->next;
	delete a;
	return head;
}


Node *removeDuplicates(Node *head)
{
	if(head == NULL) return head;
	Node* temp = head;
	Node* prevTemp = temp;
	int newData = temp->data;
	temp = temp->next;
	while(temp != NULL) {
		if(temp->data == newData) temp = remove(prevTemp);
		newData = temp->data;
		prevTemp = temp;
		temp = temp->next;
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
    head = removeDuplicates(head);
    print(head);
}

// Only run for sorted Array...