#include<iostream>
#include<vector>
using namespace std;
int main() {
    int r,c;
    cin >> r >> c;
    // Array of Vector...
    vector<int> arr[r];
    
    // Resize The Vector to make 2D array...
    for(int i=0; i<r; i++) arr[i].resize(c);

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) cin >> arr[i][j];
    }

    // Sum of Rows...
    for(int i=0; i<r; i++) {
        int sum=0;
        for(int j=0; j<c; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }

    // Creating a Vector of Size r and Each Element is Vector of Integer of C size...
    vector<vector<int> > arr2(r, vector<int>(c));
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) cin >> arr[i][j];
    }

    // Sum of Rows...
    for(int i=0; i<r; i++) {
        int sum=0;
        for(int j=0; j<c; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}