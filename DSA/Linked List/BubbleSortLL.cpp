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

int length(Node* head) {
    if(head == NULL) return 0;
    return (1+length(head->next));
}

Node *bubbleSort(Node *head)
{
	if(head == NULL || head->next == NULL) return head;
    int size = length(head);
    for(int i=0; i<size; i++) {
        Node* prev = NULL;
        Node* curr = head;
        while(curr->next != NULL) {
            if(curr->data > curr->next->data) {
                if(prev != NULL) {
                    Node* temp = curr->next->next;
                    curr->next->next = curr;
                    prev->next = curr->next;
                    curr->next = temp;
                    prev = prev->next;   
                } else {
                    head = curr->next;
                    curr->next = head->next;
                    head->next = curr;
                    prev = head;
                }
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
    }
    return head;
}

int main() {
    Node* head = takeInput();
    head = bubbleSort(head);
    print(head);
}

// TC => O(n)...
// TC => O(1)...