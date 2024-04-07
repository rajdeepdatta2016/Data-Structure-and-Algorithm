#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Queue {
    T * queue;
    int capacity;
    int size;
    int last, first;

    public:

    Queue() {
        queue = new T[4];
        first = -1;
        last = 0;
        capacity = 4;
        size = 0;
    }

    void enqueue(T data) {
        if(first == last) {
            T* newArr = new T[2*capacity];
            int j=0;
            for(int i=first; i<capacity; i++,j++) {
                newArr[j] = queue[i];
            }
            for(int i=0; i<first; i++,j++) {
                newArr[j] = queue[i];
            }
            delete [] queue;
            first = 0;
            last = capacity;
            capacity *= 2;
            queue = newArr;
        }
        queue[last] = data;
        last = (last+1) % capacity;
        if(first == -1) first = 0;
        size++;
    }

    T dequeue() {
        if(isEmpty()) {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        T data = queue[first];
        first = (first+1) % capacity;
        size--;
        if(size == 0) {
            first = -1;
            last = 0;
        }
        return data;
    }

    T front() {
        if(isEmpty()) {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return queue[first];
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }
};