#include<bits/stdc++.h>
using namespace std;

// Helper Funtion Recursively Iterate Whole Array...
bool helper(int * arr, int n, int startIndex, int leftSum, int rightSum) {

    // If Index goes Out of Bound return....
    if(startIndex == n) return (leftSum == rightSum);

    // If arr[startIndex] divided by 5 then add it to Group 1 Sum...
    if(arr[startIndex] % 5 == 0) leftSum += arr[startIndex];

    // If arr[startIndex] not divisible by 5 but divisible by 3, then add it to Group 2 Sum...
    else if(arr[startIndex] % 3 == 0) rightSum += arr[startIndex];

    // If arr[startIndex] neither divisible by 5 nor by 3, we will add it by two cases, one for leftSum and another for rightSum. If one of them is true.. Just return true.,.
    else {
        return (helper(arr, n, startIndex+1, leftSum+arr[startIndex], rightSum) || helper(arr, n, startIndex+1, leftSum, rightSum+arr[startIndex]));
    }

    // Goes for next Element in Array...
    return helper(arr, n, startIndex+1, leftSum, rightSum);
}

// For Iterating whole array by recursion, we created startIndex...
bool splitArray(int* arr, int n) {
    int startIndex = 0;
    return helper(arr, n, startIndex, 0, 0);
}

// Driver Code...
int main() {
    int n;
	cin >> n;
	int *arr = new int[n];	
	for(int i=0; i<n; i++) cin >> arr[i];

    if(splitArray(arr, n)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    delete [] arr;
	return 0;

}
