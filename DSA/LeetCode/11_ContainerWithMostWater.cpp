// Medium Level Question (11)...

#include<bits/stdc++.h>
using namespace std;

// To find the Maximum Area....
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxArea = 0;

    while(left < right) {

        // Find the Area Between Left and Right...
        int currentArea = min(height[left], height[right]) * (right - left);
        
        // If the currentArea is greater than maximum area then store it on maxArea...
        maxArea = max(maxArea, currentArea);

        // If left value is small increment left index otherwise decrement right index...
        if(height[left] < height[right]) left++;
        else right--;
    }
    return maxArea;
}

// Driver Code...
int main() {
    int n; 
    cin >> n;
    vector<int> height(n);

    for(int i=0; i<n; i++) {
        cin >> height[i];
    }

    int area = maxArea(height);

    cout << endl << "The Maximum Capacity of Water Container is = " << area << endl;
    return 0;
}