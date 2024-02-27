#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l1;
    l1.push_back(10);       // {10}
    l1.push_back(20);       // {10, 20}
    l1.push_front(30);      // {30, 10, 20}
    l1.push_front(40);      // {40, 30, 10, 20}
    for(auto it : l1) {
        cout << it << " ";
    } cout << endl;
    cout << "Size of List = " << l1.size() << endl;
    l1.erase(l1.begin());   // {30, 10, 20}
    for(auto it : l1) cout << it << " ";
    cout << endl;
    cout << "First Element = " << l1.front() << endl;
    cout << "Last Element = " << l1.back() << endl;
    l1.clear();
    if(l1.empty()) cout << "List is Empty" << endl;
    else cout << "List is not Empty" << endl;
}

// Rest Function same as vector...
// begin, end, rbegin, rend, clear, insert, size, swap, erase, empty...