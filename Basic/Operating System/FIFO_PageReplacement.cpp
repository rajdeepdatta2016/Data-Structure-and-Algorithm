#include<bits/stdc++.h>
using namespace std;
bool isPresent(int page, int *frames, int n) {
    for(int i=0; i<n; i++) {
        if(page == frames[i]) return false;
    }
    return true;
}
void fifoPageReplacement(int pages[], int n, int capacity) {
    int frames[capacity];
    int pageFault = 0;
    int currentSize = 0;
    int index = 0;
    for(int i=0; i<n; i++) {
        if(isPresent(pages[i], frames, currentSize)) {
            if(currentSize < capacity) {
                frames[currentSize++] = pages[i]; 
            }
            else {
                frames[index] = pages[i];
                index = (index+1)%capacity;
            }
            pageFault++;
        }
        cout << "Page " << pages[i] << " -> ";
        for(int j=0; j<currentSize; j++) {
            cout << frames[j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Total Page Fault = " << pageFault << endl;
    cout << endl << "Total Page Fault Rate = " << ((float)pageFault/n) * 100 << "%" << endl;
}
int main() {
    int n, capacity;
    cout << "Enter the Size Of Reference String: ";
    cin >> n;
    int pages[n];
    cout << "Enter the String:" << endl;
    for(int i=0; i<n; i++) {
        cin >> pages[i];
    }
    cout << "Enter the Size of Frames: " << endl;
    cin >> capacity;
    fifoPageReplacement(pages, n, capacity);
}