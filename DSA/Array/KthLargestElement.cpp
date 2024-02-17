#include<iostream>
#include<vector>
using namespace std;
void Klargest(int arr[],int output[],int n,int k){
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for(int i=0; i<k; i++) {
        output[k-1-i] = arr[i];
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int brr[k];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Klargest(arr, brr, n,k);
    for(int i = 0;i<k;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
