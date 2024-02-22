#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> pages, int n, int k, int value) {
    int countStudents = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++) {
        if(pageSum + pages[i] <= value) {             // If condition satisfies then allocate the books...
            pageSum += pages[i];
        } else {                                      // If condition not satisfies then increase students and check if the students range is <= given range or the present page is <= mid...
            countStudents++;
            if(countStudents > k || pages[i] > value) return false;   
            pageSum = pages[i];                       // If students are in range then set pageSum as present page Values...
        }
    }
    return true;
}

int maxBookAllocation(vector<int> pages, int n, int k) {
    // If No. of Students is greater than no. of Books, Simply returns -1...
    if(n < k) return -1;

    
    int start = 0;
    int end = 0;
    int ans = -1;
    for(int i=0; i<n; i++) {
        end += pages[i];                // End should be the sum of all elements...
    }
    int mid = start + (end-start)/2;
    while(start <= end) {
        if(isPossible(pages, n, k, mid)) {          // If Allocation Possible, ans = mid and end = mid-1 because if mid is allocating books perfectly than greater than mid also able to allocate books...
            ans = mid;
            end = mid-1;
        } else start = mid+1;                       // If Allocation is not possible start = mid + 1 because if mid is not possibly allocate books less than mid also can't able to allocate books...
        mid = start + (end - start)/2;
    }
    return ans;                                     // Return Ans which stores the value of minimum maxPages...
}

int main() {
    int totalBooks, noOfStudents;
    cin >> totalBooks >> noOfStudents;
    vector<int> pages(totalBooks);
    for(int i=0; i<totalBooks; i++) {
        cin >> pages[i];
    }
    int maxAllocation = maxBookAllocation(pages, totalBooks, noOfStudents);
    cout << maxAllocation << endl;
}

// TC => O(nlog(n))...
// SC => O(1)...