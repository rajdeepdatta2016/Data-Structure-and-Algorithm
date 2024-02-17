#include <bits/stdc++.h>
using namespace std;

// Find Max Value Function...
int* findmax(int *arr,int n)
{
    int* max = arr;
    for(int i=0; i<n; i++) {
        if(arr[i] > *max) max = &arr[i];
    }
    return max;
}

// Driver Code...
int main()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
   }
   int *ans =findmax(ar,n);
   cout<<*ans;
    
}