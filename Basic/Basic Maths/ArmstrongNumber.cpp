#include <bits/stdc++.h> 
using namespace std;

bool isArmstrong(int num) {
    int temp = num, count = 0, ans = 0;
    while(temp > 0) {
        count++;
        temp /= 10;
    }
    temp = num;
    while(temp > 0) {
        int ld = temp % 10;
        ans += pow(ld, count);
        temp /= 10;
    }
    if(num == ans) return true;
    else return false;
}

int main() {
    int num;
    cin >> num;
    bool isArmstrongNum = isArmstrong(num);
    if(isArmstrongNum) cout << "Armstrong Number" << endl;
    else cout << "Not Armstrong Number" << endl;
}

// TC => O(logn)...
// SC => O(1)...