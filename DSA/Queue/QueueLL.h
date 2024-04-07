#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node {
    public:
    T data;
    Node * next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template<typename T>
class Queue {
    Node<T> * head;
    Node<T> * tail;
    int size;
    public:

    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(T data) {
        Node<T> * newQ = new Node<T>(data);
        if(head == NULL) {
            head = newQ;
        } else {
            tail->next = newQ;
        }
        tail = newQ;
        size++;
    }

    T dequeue() {
        if(head == NULL) {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        int data = head->data;
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        size--;
        return data;
    }

    T front() {
        if(head == NULL) {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return head->data;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return head == NULL;
    }
};