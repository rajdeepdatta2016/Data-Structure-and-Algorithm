#include<bits/stdc++.h>
using namespace std;

int pairSum(int* arr, int n, int target) {
    sort(arr, arr+n);
    int i=0, j=n-1, count = 0;
    while(i < j) {
        if(arr[i] + arr[j] < target) i++;
        else if(arr[i] + arr[j] > target) j--;
        else {
            int start = arr[i];
            int end = arr[j];
            if(start == end) {
                int total = (j-i)+1;
                count += (total * (total-1)/2);
                return count;
            }

            int tempStartIndex = i+1;
            int tempEndIndex = j-1;
            
            while(tempStartIndex <= tempEndIndex && arr[tempStartIndex] == start) tempStartIndex++;
            while(tempEndIndex >= tempStartIndex && arr[tempEndIndex] == end) tempEndIndex--;

            int totalStart = tempStartIndex - i;
            int totalEnd = j - tempEndIndex;
            count += (totalStart * totalEnd);
            i = tempStartIndex;
            j = tempEndIndex;
        }
    }
    return count;
}

int main() {
    int n, target;
    cin >> n >> target;
    int * arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int count = pairSum(arr, n, target);
    cout << "Total Pairs = " << count << endl;
    delete [] arr;
}