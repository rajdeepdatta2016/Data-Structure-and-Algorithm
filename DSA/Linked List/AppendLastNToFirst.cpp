#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

Node *appendLastNToFirst(Node *head, int n)
{
	if(head == NULL) return head;           // If no list...
	if(n == 0) return head;                 // If no repetition...
	Node* p1 = head;                        // For disconnecting node after all repetition...
	Node* p2 = head;                        // For making new head....
	Node* tail = head;                      // Last node for connecting with first node...
	int count = 1;                          // Find the total nodes...
    while (tail->next != NULL) {
    	tail = tail->next;
        count++;
    }
    
    // 1->2->3->4->5 after 3 repetition... 3->4->5->1->2...
    // Here 3 becomes new head and 2->3 removed and 5->1 connects...
    // So diff = (5-3 = 2) so 2 changes from head should be at 3...
	int diff = count - n;                   // Diff of repetition and total nodes to find the new head position...
	while(diff != 0) {
		p1 = p2;
		p2 = p2->next;
		diff--;
	}
	tail->next = head;
	p1->next = NULL;
	head = p2;
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
    int rep;
    cin >> rep;
    head = appendLastNToFirst(head, rep);
    print(head);
}