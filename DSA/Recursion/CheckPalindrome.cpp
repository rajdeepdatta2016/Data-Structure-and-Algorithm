#include<iostream>
using namespace std;

/* bool checkPalindrome(int* arr, int left, int right) {
    if(left > right) return true;
    if(arr[left] != arr[right]) return false;
    bool isPalindrome = checkPalindrome(arr, left+1, right-1);
    return isPalindrome;
} */

// Checking Palindrome by checking 1st and last element of the array...
bool checkPalindrome(int* arr, int n) {
    if(n == 0 || n == 1) return true;
    if(arr[0] != arr[n-1]) return false;
    bool isPalindrome = checkPalindrome(arr+1, n-2);
    return isPalindrome;
}

// Driver Code...
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    // bool isPalindrome = checkPalindrome(arr, 0, n-1);
    bool isPalindrome = checkPalindrome(arr, n);
    if(isPalindrome) cout << "The Array is Palindrome" << endl;
    else cout << "The Array is not Palindrome" << endl;
}