#include<bits/stdc++.h>
using namespace std;

void pairStar(char input[]) {
    if(input[0] == '\0' || input[1] == '\0') return;

    if(input[0] == input[1]) {
        int size = strlen(input);
        input[size+1] = '\0';
        size--;
        while(size > 0) {
            input[size+1] = input[size];
            size--;
        }
        input[1] = '*';
    }
    pairStar(input+1);
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}