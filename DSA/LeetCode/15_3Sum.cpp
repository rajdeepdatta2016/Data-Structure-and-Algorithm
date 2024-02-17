// Hard Medium Level Question (15)...

#include<bits/stdc++.h>
#include<set>
using namespace std;

vector<vector<int> > threeSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set<vector<int> > set;
    vector<vector<int> > ans;
    for(int i=0; i<n-2; i++) {
        int low = i+1, high = n-1;
        while(low < high) {
            if(nums[i] + nums[low] + nums[high] < 0) {
                low++;
            } else if(nums[i] + nums[low] + nums[high] > 0) {
                high--;
            } else {
                vector<int> ax(3);
                ax[0] = nums[i];
                ax[1] = nums[low];
                ax[2] = nums[high];
                set.insert(ax);
                low++;
                high--;
            }
        }
    }
    for(auto it : set) {
        ans.push_back(it);
    }
    return ans;
}

// Driver Code...
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<vector<int> > ans = threeSum(arr);

    cout << "Pairs of Three Sums of 0 are: " << endl;
    int a = ans.size();
    for(int i=0; i<a; i++) {
        int b = ans[i].size();
        for(int j=0; j<b; j++) {
            cout << ans[i].at(j) << " ";
        }
        cout << endl;
    }
}