#include<bits/stdc++.h>
using namespace std;

bool isPartitionPossible(vector<int> &boards, int size, int painters, int maxTime) {
    int countPainters = 1;
    int sumOfTime = 0;
    for(int i=0; i<size; i++) {
        if(sumOfTime + boards[i] <= maxTime) sumOfTime += boards[i];
        else {
            countPainters++;
            if(countPainters > painters || boards[i] > maxTime) return false;
            sumOfTime = boards[i];
        }
    }
    return true;
}

int findMaximumTime(vector<int> &boards, int painters) {
    int size = boards.size();
    int start = 0, end = 0;
    int maxTime = 0;
    for(int i=0; i<size; i++) {
        end += boards[i];
    }
    int mid = start + (end - start)/2;
    while(start <= end) {
        if(isPartitionPossible(boards, size, painters, mid)) {
            maxTime = mid;
            end = mid - 1;
        } else start = mid + 1;
        mid = start + (end - start)/2;
    }
    return maxTime;
}

int main() {
    int totalBoards, painters;
    cin >> totalBoards >> painters;
    vector<int> boards(totalBoards);
    for(int i=0; i<totalBoards; i++) {
        cin >> boards[i];
    }
    int maximumTime = findMaximumTime(boards, painters);
    cout << maximumTime << endl;
}

// TC => O(nlog(n))...
// SC => O(1)...