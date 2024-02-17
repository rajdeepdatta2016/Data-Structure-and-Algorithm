#include<iostream>
using namespace std;

bool checkPalindrome(char* arr) {
    int st = 0, en = strlen(arr)-1;
    while(st <= en) {
        if(arr[st] != arr[en]) return false;
        st++;
        en--;
    }
    return true;
}

int main() {
    char arr[100000];
    cin >> arr;

    bool isPalindrome = checkPalindrome(arr);
    if(isPalindrome) cout << "YES";
    else cout << "NO";
}