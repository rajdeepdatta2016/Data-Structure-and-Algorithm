#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    if(x < 2) return x;
    int ans;
    long long start = 1, end = x/2;
    long long mid = start + (end-start)/2;
    while(start <= end) {
        if((mid*mid) == x) {
            ans = mid;
            break;
        } else if((mid*mid) < x) {
            start = mid+1;
            ans = mid;
        } else{
            end = mid-1;
        }
        mid = start + (end-start)/2; 
    }
    return ans;
    }

int main() {
    int x;
    cin >> x;
    cout << "Sqaure Root of " << x << " is = " << mySqrt(x) << endl;
}