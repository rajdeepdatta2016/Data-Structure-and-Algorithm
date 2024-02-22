#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int n, int cows, int mid) {
    int countCows = 1;
    int lastPos = 0;
    for(int i=0; i<n; i++) {
        if(stalls[i] - lastPos >= mid) {
            countCows++;
            if(countCows == cows) return true;
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int cows) {
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int start = 0;
    int maxi = -1;
    for(int i=0; i<n; i++) {
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end) {
        if(isPossible(stalls, n, cows, mid)) {
            ans = mid;
            start = mid + 1;
        } else end = mid - 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    int size, cows;
    cin >> size >> cows;
    vector<int> stalls(size);
    for(int i=0; i<size; i++) {
        cin >> stalls[i];
    }
    int minDistance = aggressiveCows(stalls, cows);
    cout << minDistance << endl;
}

// TC => O(nlog(n))...
// SC => O(log(n))...