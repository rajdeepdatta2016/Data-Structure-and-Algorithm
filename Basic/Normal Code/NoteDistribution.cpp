#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    int totalAmount;
    cin >> totalAmount;

    // Finding Total 100 Rupees Notes
    int x = totalAmount / 100;
    switch(x) {
        case 0: break;
        default: 
            cout << "100 Rupees Notes = " << x << endl;
            totalAmount -= x*100;
    }

    // Finding Total 50 Rupees Notes
    x = totalAmount / 50;
    switch(x) {
        case 0: break;
        default: 
            cout << "50 Rupees Notes = " << x << endl;
            totalAmount -= x*50;
    }

    // Finding Total 20 Rupees Notes
    x = totalAmount / 20;
    switch(x) {
        case 0: break;
        default: 
            cout << "20 Rupees Notes = " << x << endl;
            totalAmount -= x*20;
    }
    
    // Finding Total 1 Rupee Coins
    x = totalAmount;
    switch(x) {
        case 0: break;
        default: 
            cout << "1 Rupee Coins = " << x << endl;
            totalAmount -= x*1;
    }
}