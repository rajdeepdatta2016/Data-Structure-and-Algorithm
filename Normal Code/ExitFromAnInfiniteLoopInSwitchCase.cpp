#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    int ch = 1;
    while(true) {
        switch(ch) {
            case 1: 
                cout << "Rajdeep Datta" << endl;
                exit(0);
            case 2: 
                cout << "Tamanna Sarkar" << endl;
                break;
            default:
                cout << "Keda Tui" << endl;
                break;
        }
    }
}