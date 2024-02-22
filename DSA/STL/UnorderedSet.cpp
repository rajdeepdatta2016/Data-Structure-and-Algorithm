#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main() {
    unordered_set<int> st;
    st.insert(1);           // {1}
    st.insert(2);           // {1,2} or {2, 1}
    st.insert(3);           // {1,2,3} or {1,3,2} or {2,1,3} or etc...
    st.insert(4);           // Same for this... Let's assume {3, 1, 4, 2}
    st.insert(2);           // {3, 1, 4, 2}
    st.insert(2);           // {3, 1, 4, 2}

}

// It doesn't store values in any order...
// lower_bound and upper_bound doesn't work...
// Other than all set operation works...
// Everything on O(1)...