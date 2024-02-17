#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    // Spiral Order Print....
    int rowStart = 0, rowEnd = n-1, colStart = 0, colEnd = m-1;

    while(rowStart <= rowEnd && colStart <= colEnd) {

        // For Starting Row...
        for(int col = colStart; col <= colEnd; col++) {
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;

        // For Ending Column...
        for(int row = rowStart; row <= rowEnd; row++) {
            cout << arr[row][colEnd] << " ";
        }
        colEnd--;

        // For Ending Row...
        for(int col = colEnd; col >= colStart; col--) {
            cout << arr[rowEnd][col] << " ";
        }
        rowEnd--;

        // For Starting Column...
        for(int row = rowEnd; row >= rowStart; row--) {
            cout << arr[row][colStart] << " ";
        }
        colStart++;
    }
}