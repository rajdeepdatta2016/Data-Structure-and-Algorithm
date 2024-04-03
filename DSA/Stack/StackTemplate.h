#include<bits/stdc++.h>
using namespace std;
template <typename T>

class Stack {
    T* data;
    int nextIndex;
    int capacity;

    public:
    Stack() {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    void push(T element) {
        if(nextIndex == capacity) {
            T *newData = new T[2*capacity];
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
    
    T pop() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    
    T top() {
        if(isEmpty()) {
            cout << "Stack is Empty" << endl;
            return 0;
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