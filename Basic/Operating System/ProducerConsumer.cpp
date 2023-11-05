#include<bits/stdc++.h>
using namespace std;
int Mutex = 1;
int Full = 0;
int Empty = 10;
int x = 0;

void producer() {
    --Mutex;
    ++Full;
    --Empty;
    x++;
    cout << "Producer Produces item " << x << endl;
    ++Mutex;
}

void consumer() {
    --Mutex;
    --Full;
    ++Empty;
    cout << "Consumer Consumes item " << x << endl;
    x--;
    ++Mutex;
}

int main() {
    int n;
    cout << "Enter Buffer Size: ";
    cin >> Empty;
    cout << "Press 1 for Producer" << endl;
    cout << "Press 2 for Consumer" << endl;
    cout << "Press 3 for Exit" << endl << endl;

    while(true) {
        cout << endl << "Enter Your Choice : ";
        cin >> n;

        switch(n) {
            case 1:
                if((Mutex == 1) && (Empty != 0)) producer();
                else cout << "Buffer is Full" << endl;
                break;
            case 2:
                if((Mutex == 1) && (Full != 0)) consumer();
                else cout << "Buffer is Empty" << endl;
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Wrong Input... Please Enter Correct Input" << endl << endl;
                cout << "Press 1 for Producer" << endl;
                cout << "Press 2 for Consumer" << endl;
                cout << "Press 3 for Exit" << endl << endl;

        }
    }
}