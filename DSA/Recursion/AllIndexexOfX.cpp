#include<bits/stdc++.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
    if(size == 0) return 0;
    int N;
    if(input[0] == x) {
        N = 1+allIndexes(input+1, size-1, x, output);
    }
    else {
        N = 0+allIndexes(input+1, size-1, x, output);
    }
    for(int i=0; i<N; i++) {
        output[i] += 1;
    }
    if(input[0] == x) {
        int x = N;
        while(x>=0) {
            output[x+1] = output[x];
            x--;
        }
        output[0] = 0;
    }
    return N;
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n], output[10000];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int size = allIndexes(arr, n, x, output);
    cout << "All Indexes are: " << endl;
    for(int i=0; i<size; i++) {
        cout << output[i] << " ";
    }
}