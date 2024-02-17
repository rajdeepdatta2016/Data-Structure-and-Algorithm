#include<iostream>
using namespace std;

int main() {
    int n, m, target;
    cin >> n >> m >> target;
    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    // Search Element...
    bool find = false;
    int row = 0, col = m-1;
    while(row < n && col >=0) {
        if(arr[row][col] == target) {
            find = true;
            break;
        } else if(arr[row][col] > target) col--;  // If Target is Smaller than Current Element then Shift to the Previous Column Element...
        else row++;  // If the Target is Larger than the Current Element then Shift to the Next Row Element... 
    }
    if(find == true) cout << "Element is found";
    else cout << "Element not found";
}