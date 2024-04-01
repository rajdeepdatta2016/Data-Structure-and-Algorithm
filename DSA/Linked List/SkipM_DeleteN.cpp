#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node *skipMdeleteN(Node *head, int M, int N)
{
    if(M == 0) return NULL;
	if(N == 0) return head;
    Node * temp = head;
	int x = M, y = N;
	while(temp != NULL) {
		if(x > 1) x--;
		else if(y > 0) {
            if(temp->next == NULL) break;
			temp->next = temp->next->next;
			y--;
            continue;
		} else {
			x = M;
			y = N;
		}
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
    int m, n;
    cin >> m >> n;
    head = skipMdeleteN(head, m, n);
    print(head);
}