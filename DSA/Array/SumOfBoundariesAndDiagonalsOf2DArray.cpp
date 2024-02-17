#include<bits/stdc++.h>
using namespace std;

// Find Sum of Diagonals and Boundaries...
int totalSum(vector<vector<int> > input, int n)
{
    int sum = 0;
    
    // Sum of Upper and Lower Boundary...
    for(int i=0; i<n; i++) {
        sum += input[0][i];
        sum += input[n-1][i];
    }

    // Sum of Left and Right Boundary without the corner elements...
    for(int i=1; i<n-1; i++) {
        sum += input[i][0];
        sum += input[i][n-1];
    }

    // Sum of Diagonals...
    for(int i=1; i<n-1; i++) {
        sum += input[i][i];
        sum += input[i][n-i-1];
    }
    
    // Remove Repeated Diagonal Element of Odd Number Size Array...
    if(n%2==1) {
        int mid = n/2;
        sum -= input[mid][mid];
    }
    return sum;
}

// Driver Code...
int main()
{
	int n;
	cin >> n;
	vector<vector<int> > arr(n,vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}    
    cout << totalSum(arr, n) << endl; 
}