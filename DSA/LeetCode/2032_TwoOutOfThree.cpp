#include<bits/stdc++.h>
using namespace std;

vector<int> twoOutOfThree(vector<int> nums1, vector<int> nums2, vector<int> nums3) {
    vector<int> v1(101, 0), v2(101, 0), v3(101, 0);
    vector<int> ans;
    int size1 = nums1.size(), size2 = nums2.size(), size3 = nums3.size();
    for(int i=0; i<size1; i++) v1[nums1[i]] = 1;
    for(int i=0; i<size2; i++) v2[nums2[i]] = 1;
    for(int i=0; i<size3; i++) v3[nums3[i]] = 1;

    for(int i=0; i<=100; i++) {
        if((v1[i] + v2[i] + v3[i]) >= 2) ans.push_back(i);
    }
    return ans;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> nums1(a), nums2(b), nums3(c);
    for(int i=0; i<a; i++) cin >> nums1[i];
    for(int i=0; i<b; i++) cin >> nums2[i];
    for(int i=0; i<c; i++) cin >> nums3[i];

    vector<int> present = twoOutOfThree(nums1, nums2, nums3);
    int size = present.size();
    for(int i=0; i<size; i++) {
        cout << present[i] << " ";
    }
}

// Time Complexity = O(a) if(a > b > c) || (a > c > b)...
// Space Complexity = O(a) if (a < b < c) || (a < c < b)...