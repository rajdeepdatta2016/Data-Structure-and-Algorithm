#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v1(5, -1);
    for(int i=0; i<5; i++) cout << v1[i] << " ";
    cout << endl;

    vector<int> v2(5);
    for(int i=0; i<5; i++) {
        cin >>v2[i];
    }
    v2.push_back(6);
    v2.push_back(10);
    v2.pop_back();
    int size = v2.size();
    for(int i=0; i<size; i++) cout << v2[i] << " ";
    cout << endl;

    cout << "Capacity = " << v2.capacity() << endl;
    for(int i=0; i<5; i++) v2.push_back(i);
    cout << "Size = " << v2.size() << " Capacity = " << v2.capacity() << endl;

    // vector declaration
    // .push_back()
    // .pop_back()
    // .size()
    // .capacity()
}