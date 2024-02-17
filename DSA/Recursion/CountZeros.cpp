#include<iostream>
using namespace std;

int countZeros(int n) {
    // If the Value (0 < n <= 9) then return 0, if the Value is n == 0 then return 1, if the last digit is 0 then increse One(1)...
    if(n <= 9) {
        if(n == 0) return 1;
        return 0;
    }

    int digit = n%10;
    if(digit == 0) return 1 + countZeros(n/10);
    return countZeros(n/10);
}

// Driver Code...
int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}