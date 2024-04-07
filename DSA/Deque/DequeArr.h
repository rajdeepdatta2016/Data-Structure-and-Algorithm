#include <iostream>
using namespace std;

class Deque {
private:
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Deque(int cap) {
        capacity = cap;
        arr = new int[capacity];
        size = 0;
        front = -1;
        rear = 0;
    }

    void insertFront(int element) {
        if (isFull()) {
            cout << "-1\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = capacity - 1;
        } else {
            front--;
        }
        arr[front] = element;
        size++;
    }

    void insertRear(int element) {
        if (isFull()) {
            cout << "-1\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (rear == capacity - 1) {
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = element;
        size++;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "-1\n";
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (front == capacity - 1) {
            front = 0;
        } else {
            front++;
        }
        size--;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "-1\n";
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = capacity - 1;
        } else {
            rear--;
        }
        size--;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    ~Deque() {
        delete[] arr;
    }
};