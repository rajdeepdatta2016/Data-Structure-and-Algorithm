#include<iostream>
using namespace std;

int countDigits(int n){
	if(n == 0) return 0;
	int count = 1 + countDigits(n/10);
	return count;
}

int main() {
    int n, count;
    cin >> n;
    count = countDigits(n);
    cout << "Total Number of Digits = " << count;
}