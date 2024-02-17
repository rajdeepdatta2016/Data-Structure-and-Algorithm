#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, ind = 0;
    cout << "Enter Total Process and Resource Type: ";
    cin >> n >> m;
    int alloc[n][m], max[n][m], avail[m];

    cout << endl;
    for(int i=0; i<n; i++) {
        cout << "Enter Allocation Resource of Process " << i << ": ";
        for(int j=0; j<m; j++) {
            cin >> alloc[i][j];
        }
    }

    cout << endl;
    for(int i=0; i<n; i++) {
        cout << "Enter Max Resource of Process " << i << ": ";
        for(int j=0; j<m; j++) {
            cin >> max[i][j];
        }
    }

    cout << endl;
    cout << "Enter Available Resources: ";
    for(int i=0; i<m; i++) {
        cin >> avail[i];
    }
    int f[n], ans[n], need[n][m];
    for(int i=0; i<n; i++) {
        f[i] = 0;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    int y=0; 
    for(int k=0; k<n; k++) {
        for(int i=0; i<n; i++) {
            if(f[i] == 0) {
                int flag = 0;
                for(int j=0; j<m; j++) {
                    if(need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0) {
                    ans[ind++] = i;
                    for(y=0; y<m; y++) {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }
    cout << endl;
    int flag=1;
    for(int i=0; i<n; i++) {
        if(f[i] == 0) {
            flag = 0;
            cout << "The Following System is not Safe" << endl;
            break;
        }
    }
    if(flag == 1) {
        cout << "The Following Safe Sequence is :" << endl;
        for(int i=0; i<n-1; i++) cout << "P" << ans[i] << "->";
        cout << "P" << ans[n-1];
    }
}