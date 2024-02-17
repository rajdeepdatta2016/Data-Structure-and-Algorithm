#include<iostream>
using namespace std;
vector<vector<int> > findPairs(vector<int> arr, int t) {
    vector<vector<int> > ans;
    for(int i=0; i<arr.size()-2; i++) {
        for(int j=i+1; j<arr.size()-1; j++) {
            for(int k=j+1; k<arr.size(); k++) {
                if(arr[i]+arr[j]+arr[k] == t) {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}
int main() {
    int a,n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    int target;
    cout << "Enter Target = ";
    cin >> target;
    vector<vector<int> > pairs = findPairs(arr,target); 
    for(int i=0; i<pairs.size(); i++) {
        for(int j=0; j<3; j++) {
            cout << pairs[i][j] << " ";
        }
        cout << endl;
    }
}