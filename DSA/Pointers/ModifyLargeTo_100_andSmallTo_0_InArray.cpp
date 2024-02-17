#include <iostream>
using namespace std;

// Modify Large and Small Values in this Function....
void modify(int *arr,int n)
{
	int* min = arr;
	int* max = arr;
	for(int i=1; i<n; i++) {
		if(arr[i] < *min) min=&arr[i];  // Finding Minimum of the Array...
		if(arr[i] > *max) max=&arr[i];  // Finding Maximum of the Array...
	}
	*min = 0;   // Convert Minimum Element to 0...
	*max = 100; // Convert Maximum Element to 100...
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
    modify(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}