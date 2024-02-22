#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    for(int i=0; i<2; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<pair<int, int> > vec;
    // vec.push_back({1,2});
    vec.emplace_back(3,4);
    for(int i=0; i<1; i++) {
        cout << vec[i].first << " " << vec[i].second << endl;
    }

    // Copy a Vector...
    vector<int> v1(5, 100);
    vector<int> v2(v1);

    // Iterator....
    for(vector<int>::iterator it = v2.begin(); it != v2.end(); ++it) {
        cout << *(it) << endl;
    }

    vector<int> vect1;
    vect1.push_back(10);
    vect1.push_back(20);
    vect1.push_back(30);
    vect1.push_back(40);
    vect1.push_back(50);
    // Iterator...
    for(vector<int>::iterator it = vect1.begin(); it != vect1.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    // Reverse Iterator...
    for(vector<int>::reverse_iterator it = vect1.rbegin(); it != vect1.rend(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // .back() points to last element...
    cout << vect1.back() << endl;

    // Simple Iterator using auto...
    for(auto it = vect1.begin(); it != vect1.end(); it++) {
        cout << *(it) << " ";
    } 
    cout << endl;
    // Another way of Iterating...
    for(auto it : vect1) {
        cout << it << " ";
    }
    cout << endl;

    // Erasing Vector Element....
    // {10, 20, 30, 40, 50}
    vect1.erase(vect1.begin()+1);   // {10, 30, 40, 50}...

    // {10, 30, 40, 50}
    vect1.erase(vect1.begin()+1, vect1.begin()+3);      // {10, 50}  [start, end)..

    // Insert Function...
    vector<int> v3(2, 100);                                     // {100, 100}
    v3.insert(v3.begin(), 300);                                 // {300, 100, 100}
    v3.insert(v3.begin()+1, 2, 10);                             // {300, 10, 10, 100, 100}
    v3.insert(v3.begin()+2, vect1.begin(), vect1.end());        // {300, 10, 10, 50, 10, 100, 100}
    for(auto it : v3) {
        cout << it << " ";
    }
    cout << endl;

    // Swap Vectors...
    // vect1 -> {10, 50}
    // v2 -> {100, 100, 100, 100, 100}
    vect1.swap(v2);         // vect1->{100, 100, 100, 100, 100}, v2->{10, 50}
    for(auto it : vect1) {
        cout << it << " ";
    }
    cout << endl;
    for(auto it : v2) {
        cout << it << " ";
    }
    cout << endl;
    
    // Clear whole Vector...
    vect1.clear();      // Now Vect1 is empty...
    for(auto it : vect1) {
        cout << it << " ";
    }
    cout << endl;

    // Check a vector is Empty or not..
    if(vect1.empty()) cout << "Vector is Empty" << endl;
    else cout << "Vector is not Empty" << endl;
}