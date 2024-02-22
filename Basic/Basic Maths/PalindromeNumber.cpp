#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int rev = 0, temp = n;
    while(temp > 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == n) return true;
    else return false;
}

int main() {
    int num;
    cin >> num;
    bool isPalindrome = palindrome(num);
    if(isPalindrome) cout << "Number is Palindrome" << endl;
    else cout << "Number is not Palindrome" << endl;
}

// TC => O(logn)...
// SC => O(1)...