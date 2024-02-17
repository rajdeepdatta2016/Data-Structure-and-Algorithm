#include<iostream>
using namespace std;

void printRecordBreakingDay(int* arr, int n) {
    for(int i=0; i<n; i++) {
        if(i == 0 && arr[i+1] < arr[i]) cout << arr[i] << " ";
        else{
            int j=i-1;
            bool record = true;
            while(j>=0) {
                if(arr[j] > arr[i]) {
                    record = false;
                    break;
                }
                j--;
            }
            if(record == true && i == n-1) cout << arr[i] << " ";
            else if(record == true) {
                if(arr[i] > arr[i+1]) cout << arr[i] << " ";
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    printRecordBreakingDay(arr, n);
    delete [] arr;
}