#include<bits/stdc++.h>
using namespace std;

class DynamicArray {
    int * arr;
    int index;
    int capacity;
    public:
    DynamicArray() {
        arr = new int[5];
        index = 0;
        capacity = 5;
    }
    // Copy Constructor for Deep Copy...
    DynamicArray(DynamicArray const &d) {
        // this->arr = d.arr        // Shallow Copy...
        
        // Deep Copy...
        this->arr = new int[d.capacity];
        this->index = d.index;
        this->capacity = d.capacity;
        for(int i=0; i<index; i++) {
            this->arr[i] = d.arr[i];
        }
    }
    void operator=(DynamicArray const &d) {
        // Deep Copy...
        this->arr = new int[d.capacity];
        this->index = d.index;
        this->capacity = d.capacity;
        for(int i=0; i<index; i++) {
            this->arr[i] = d.arr[i];
        }
    }
    void addElement(int el) {
        if(index == capacity) {
            int *newArr = new int[2*capacity];
            for(int i=0; i<capacity; i++) {
                newArr[i] = arr[i];
            }
            delete [] arr;
            arr = newArr;
            capacity = 2*capacity;
        }
        arr[index] = el;
        index++;
    }
    void print() {
        for(int i=0; i<index; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int get(int i) {
        if(i >= index) {
            return -1;
        } else {
            return arr[i];
        }
    }
    void add(int i, int element) {
        if(i > index || i < 0) cout << "Array Index Out Of Bound" << endl;
        else if(i == index) addElement(element); 
        else {
            arr[i] = element;
        }
    }
};

int main() {
    DynamicArray d1;
    d1.addElement(1);
    d1.addElement(2);
    d1.addElement(3);
    d1.addElement(4);
    d1.addElement(5);
    d1.addElement(6);
    d1.addElement(7);
    d1.addElement(8);
    d1.addElement(9);
    d1.addElement(10);
    d1.addElement(11);
    d1.print();
    cout << d1.get(6) << endl;
    cout << d1.get(12) << endl;
    d1.add(6, 69);
    d1.add(11, 100);
    d1.add(12, 169);
    d1.print();

    DynamicArray d2(d1);        // Copy Constructor...
    DynamicArray d3;
    d3 = d1;                    // Copy Assignment Operator...
    d1.add(3, 6969);
    d2.add(3, 9696);
    d3.add(3, 5555);
    d1.print();
    d2.print();
    d3.print();
}