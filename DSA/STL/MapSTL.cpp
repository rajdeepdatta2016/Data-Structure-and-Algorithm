#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;
    map<int, pair<int, int> > mp2;
    map<pair<int, int> , int> mp3;

    mp[1] = 2;                      // {{1, 2}}
    mp.insert(make_pair(3, 1));     // {{1, 2}, {3, 1}}
    mp.insert(make_pair(2, 4));     // {{1, 2}, {2, 4}, {3, 1}}

    mp2[3] = make_pair(11, 5);      // {{3, {11, 5}}}
    mp2[7] = make_pair(6, 21);      // {{3, {11, 5}}, {7, {6, 21}}}

    mp3[make_pair(3, 1)] = 10;      // {{{3, 1}, 10}}
    mp3[make_pair(11, 7)] = 71;     // {{{3, 1}, 10}, {{11, 7}, 71}}

    for(auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    for(auto it : mp2) {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl; 
    }
    cout << mp[1] << endl;
    cout << mp[2] << endl;

    auto it = mp.find(3);
    cout << it->second << endl;

    auto it2 = mp.lower_bound(2);       // Points Lower Bound of 2...
    auto it3 = mp.upper_bound(3);       // Points Upper Bound of 3...
}

// Keys are always unique and sorted...
// Values can be non-unique...