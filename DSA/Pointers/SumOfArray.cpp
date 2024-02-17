#include<iostream>
using namespace std;

// Function for Sum
int sum(int *arr , int n)
{
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Driver Code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = sum(arr,n);
    cout<<ans;
}