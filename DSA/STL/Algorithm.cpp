#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// This is the comperator function...
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

int main() {
    // Sorting Algorithm...
    int arr[] = {13, 4, 3, 34, 7, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+size);                            // Sort in ascending order...
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr+size, greater<int>());            // Sort in descending order...
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // {34, 23, 13, 7, 4, 3}
    sort(arr+1, arr+4);                             // Sorting a particular portion...
    // {34, 7, 13, 23, 4, 3}
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);             // {4, 8, 3, 6, 7}
    // Binary Search...
    cout <<"Is 6 Present -> " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Lower Bound -> " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    // Rotate...
    rotate(v.begin(), v.begin()+1, v.end());
    for(auto i : v) cout << i << " ";
    cout << endl;

    pair<int,int> p[] = {make_pair(1, 2), make_pair(2, 1), make_pair(4, 1)};

    // Sorting using comparetor.... Comperator function is on top...
    sort(p, p+3, comp);
    for(auto it : p) {
        cout << it.first << " " << it.second << endl;
    }

    // Binary Counting...
    int num = 7;
    int count = __builtin_popcount(num);
    cout << count << endl;                  // 3 Because 7 => 111, which has 3 set bits...

    long long int num2 = 23237746323244;
    int count2 = __builtin_popcountll(num2);
    cout << count2 << endl;                 // It has 24 set Bits...


    // All permutation of String...
    // next_permutation() gives all permutation...
    string s1 = "123";
    sort(s1.begin(), s1.end());
    do {
        cout << s1 << endl;
    } while(next_permutation(s1.begin(), s1.end()));
    cout << endl;
    string s2 = "231";
    // Here the next possible permutations are...
    // 231 => 312 => 321...
    do {
        cout << s2 << endl;
    } while(next_permutation(s2.begin(), s2.end()));

    // Finding max and min element in an array;
    int arr2[] = {23, 34, 53, 21, 5, 43, 65, 87, 33, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int maxElement = *max_element(arr2, arr2+size2);
    int minElement = *min_element(arr2, arr2+size2);
    cout << maxElement << " " << minElement << endl;

    // Max and Min...
    int a = 3;
    int b = 7;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    // reverse...
    string xc = "abcdefgh";
    reverse(xc.begin(), xc.end());
    cout << xc << endl;
}

// sort()...
// binary_search()...
// lower_bound()...
// upper_bound()...
// rotate()...
// __builtin_popcount()...
// __builtin_popcountll()...
// next_permutation()...
// max()...
// min()...
// max_element()...
// min_element()...
// swap()...
// reverse()...