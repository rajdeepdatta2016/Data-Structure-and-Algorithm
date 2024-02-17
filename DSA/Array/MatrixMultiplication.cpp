#include<iostream>
using namespace std;
int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int arr1[n1][n2], arr2[n2][n3], output[n1][n3];
    cout << "Enter 1st Array Element:" << endl;
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << endl << "Enter 2nd Array Element:" << endl;
    for(int i=0; i<n2; i++) {
        for(int j=0; j<n3; j++) {
            cin >> arr2[i][j];
        }
    }

    // Matrix Multiplication...
    int row1=0, col1=0, row2=0, col2=0, i=0, j=0, sum=0;
    while(row1 < n1) {
        sum += (arr1[row1][col1] * arr2[row2][col2]);
        col1++;
        row2++;
        if(col1 >= n2) {
            output[i][j] = sum;
            j++;
            col2++;
            row2 = 0;
            col1 = 0;
            if(col2 >= n3) {
                row1++;
                col2 = 0;
                i++;
                j=0;
            }
            sum = 0;
        }
    }

    // Print Multiply of the Arrays...
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n3; j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}