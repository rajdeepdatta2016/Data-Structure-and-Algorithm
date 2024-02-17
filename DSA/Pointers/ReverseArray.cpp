#include <iostream>
using namespace std;

// Reverse Element of the Array...
void reverse(int *arr,int n) {
	int i=0, j=n-1;
	while(i<j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

// Driver Code...
int main() {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    reverse(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}