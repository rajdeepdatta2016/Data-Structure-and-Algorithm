#include<iostream>
#include<climits>
using namespace std;

class Stack {
    int* data;
    int nextIndex;
    int capacity;

    public:
    Stack() {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }

    void push(int element) {
        if(nextIndex == capacity) {
            int *newData = new int[2*capacity];
            for(int i=0; i<capacity; i++) {
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    
    int pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    
    int top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
    
    int size() {
        return nextIndex;
    }
    
    bool isEmpty() {
        return nextIndex == 0;
    }
};