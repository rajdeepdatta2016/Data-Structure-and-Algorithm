#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // Transpose of a Matrix...
    int row=0, col = 0;
    while(row < n) {
        swap(arr[row][col], arr[col][row]);
        col++;
        if(col >= n) {
            row++;
            col = row;
        }
    }

    // Print The Transpose Matrix...
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}