#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > transpose(int m, int n, vector<vector<int> > &mat){
    vector<vector<int> > trans(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            trans[i][j] = mat[j][i];
        }
    }
    return trans;
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int> > arr(r, vector<int>(c));

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int> > arr2 = transpose(r, c, arr);

    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}