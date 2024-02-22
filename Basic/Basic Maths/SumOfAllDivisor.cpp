#include<bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n){
	int ans = 0;
	for(int i=1; i<=n; i++) {
		ans += i*(n/i);
	}
	return ans;
}

int main() {
    int num;
    cin >> num;
    int sumOfDivisors =  sumOfAllDivisors(num);
    cout << sumOfDivisors << endl;
}

// TC => O(n)...
// SC => O(1)...

// If num => 5...
// Divisor of 1 => 1
// Divisor of 2 => 2, 1
// Divisor of 3 => 3, 1
// Divisor of 4 => 4, 2, 1
// Divisor of 5 => 5, 1

// 1 Appears => 5 Times         // We Find that (5 / 1) => 5
// 2 Appears => 2 Times         // We Find that (5 / 2) => 2
// 3 Appears => 1 Times         // We Find that (5 / 3) => 1
// 4 Appears => 1 Times         // We Find that (5 / 4) => 1
// 5 Appears => 1 Times         // We Find that (5 / 5) => 1

// So Sum += i * (n/i)  =>  means (1*5) + (2*2) + (3*1) + (4*1) + (5*1) = 21...