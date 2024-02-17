#include<iostream>
using namespace std;

int pairSum(int A[], int size, int K) {
    int ans = 0;
    int i=0, j=size-1;
    while(i < j) {
        if(A[i] + A[j] == K) {
            ans++;
            i++;
            j--;
        } else if(A[i] + A[j] < K) {
            i++;
        } else {
            j--;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int k;
    cin>>k;
    int ans = pairSum(input, n, k);
    cout<<ans;
    return 0;
}