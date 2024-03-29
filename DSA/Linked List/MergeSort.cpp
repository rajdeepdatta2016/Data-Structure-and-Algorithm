#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* merge(Node* head1, Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    Node* finalHead = NULL;
    Node* finalTail = NULL;

    // Initialize finalHead and finalTail with the smaller of the two heads
    if (head1->data < head2->data) {
        finalHead = head1;
        finalTail = head1;
        head1 = head1->next;
    } else {
        finalHead = head2;
        finalTail = head2;
        head2 = head2->next;
    }

    // Merge the two lists
    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            finalTail->next = head1;
            finalTail = head1;
            head1 = head1->next;
        } else {
            finalTail->next = head2;
            finalTail = head2;
            head2 = head2->next;
        }
    }

    // Append remaining nodes if any
if (head1 != NULL) {
        finalTail->next = head1;
    } else {
        finalTail->next = head2;
    }

    return finalHead;
}

Node* mergeSort(Node* head, Node* tail) {
    if (head == tail) {
        return head;
    }

    // Finding the middle of the linked list
    Node* slow = head;
    Node* fast = head->next;
    while (fast != tail && fast->next != tail) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Dividing the linked list into two halves
    Node* mid = slow;
    Node* secondHalf = mid->next;
    mid->next = NULL;

    // Recursively sort the two halves
    Node* sortedFirstHalf = mergeSort(head, mid);
    Node* sortedSecondHalf = mergeSort(secondHalf, tail);

    // Merge the sorted halves
    return merge(sortedFirstHalf, sortedSecondHalf);
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
    Node *head = takeInput();
    Node *tail = head;
    while(tail->next != NULL) tail = tail->next;
    head = mergeSort(head, tail);
    print(head);
}