#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int> >& grid) {
    int rowSize = grid.size();
    int colSize = grid[0].size();
    int row = 0, col = colSize-1;
    int count = 0;
    while(row < rowSize && col >= 0) {
        if(grid[row][col] < 0) {
            count += (rowSize - row);
            col--;
        } else row++;
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > arr(n, vector<int>(4));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }
    int totalNegative = countNegatives(arr);
    cout << "Total Negative Numbers = " << totalNegative << endl;
}