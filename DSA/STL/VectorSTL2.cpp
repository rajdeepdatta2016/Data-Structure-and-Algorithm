#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> num(5);
    for(int i=0; i<5; i++) cin >> num[i];

    // Declaration of iterator for vector...
    vector<int> :: iterator i = num.begin();

    // Deference of Iterator i as *i...
    for(; i != num.end(); i++) cout << *i << " ";
    cout << endl;

    // In place of num[0], we can use .at(index) as follows... 
    cout << num.at(0) << endl;

    // To check a Vector is Empty or not we use .empty()...
    cout << "If True = 1, If False = 0" << endl << num.empty() << endl;

    // To Clear the Vector we use .clear()...
    num.clear();
    cout << "If True = 1, If False = 0" << endl << num.empty() << endl;

    // Reverse an Vector...
    vector<int> vec(5);
    for(int i=0; i<5; i++) cin >> vec.at(i);
    reverse(vec.begin(), vec.end());
    for(i=vec.begin(); i != vec.end(); i++) cout << *i << " ";
    cout << endl;

    // Use of .front() and .back() function...
    cout << "Front = " << vec.front() << " Back = " << vec.back() << endl;

    // For Erasing Element from vector's any position we use .erase(starting index, ending index + 1) function...
    vec.erase(vec.begin());
    vec.erase(vec.begin()+1, vec.begin()+2+1);
    for(i=vec.begin(); i != vec.end(); i++) cout << *i << " ";
    cout << endl;

    // Sorting Full Vector...
    vector<int> vec2(5);
    for(int i=0; i<5; i++) cin >> vec2.at(i);
    sort(vec2.begin(), vec2.end());
    for(i=vec2.begin(); i != vec2.end(); i++) cout << *i << " ";
    cout << endl;

    // Sorting a part of a Vector...
    vector<int> vec3(5);
    for(int i=0; i<5; i++) cin >> vec3.at(i);
    sort(vec3.begin()+1, vec3.begin()+3+1);
    for(i=vec3.begin(); i != vec3.end(); i++) cout << *i << " ";
    cout << endl;

    // Sort Vector in Decreasing Order by Using greater<datatype>()...
    sort(vec3.begin(), vec3.end(), greater<int>());
    for(i=vec3.begin(); i != vec3.end(); i++) cout << *i << " ";
    cout << endl;

    // iterator
    // .begin()
    // .end()
    // .at()
    // .empty()
    // .clear()
    // reverse()
    // .erase()
    // sort
    // greater<datatype>()
}