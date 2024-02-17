#include<iostream>
using namespace std;


void moveZeroToEnd(int *p, int n){
    int i = 0;
    int k = 0;
    while(i < n && k < n){
        if(p[i] == 0){
            for(int j = i; j < n-1;j++){
                p[j]=p[j+1];
            }
            p[n-1] = 0;
            k++;
            continue;
        }
        i++;
    }
}

int main()
{
    int x;
    cin >> x;
    while(x != 0) {
        int n;
        cin >> n;
        int* p = new int[n];
        for(int i=0; i<n; i++) {
            cin >> p[i];
        }
        moveZeroToEnd(p, n);
        for(int i=0; i<n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
        delete [] p;
        x--;
    }
}