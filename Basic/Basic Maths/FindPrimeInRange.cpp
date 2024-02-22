#include<bits/stdc++.h>
using namespace std;

int checkPrime(int num) {
    if(num == 2 || num == 3) return true;
    else {
        for(int i=2; i*i <= num; i++) {             // O(sqrt(n))...
            if(num % i == 0) return false;
        }
        return true;
    }
}

void printPrime(int range) {
    for(int i=2; i<=range; i++) {                   // O(n)...
        if(checkPrime(i)) cout << i << " ";
    }
}

int main() {
    int range;
    cin >> range;
    printPrime(range);
}

// TC => O(n * sqrt(n))...
// SC => O(1)...