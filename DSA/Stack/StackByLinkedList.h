#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
    public:
    T data;
    Node<T> * next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template<typename W>
class Stack {
    Node<W> * head;
    int Size;
    public:
    Stack() {
        head = NULL;
        Size = 0;
    }

    void push(int data) {
        Node<W> * newNode = new Node<W>(data);
        if(head == NULL) {
            head = newNode;
            Size = 1;
        } else {
            newNode->next = head;
            head = newNode;
            Size++;
        }
    }

    W top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return head->data;
    }

    W pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        int ans = head->data;
        Node<W> * temp = head;
        head = head->next;
        delete temp;
        return ans;
    }

    int size() {
        return Size;
    }

    bool isEmpty() {
        return Size == 0;
    }
};