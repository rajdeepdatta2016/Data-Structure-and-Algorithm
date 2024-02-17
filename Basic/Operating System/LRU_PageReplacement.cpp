#include<bits/stdc++.h>
using namespace std;
bool isPresent(int page, int *frames, int n) {
    for(int i=0; i<n; i++) {
        if(page == frames[i]) return false;
    }
    return true;
}
void LruPageReplacement(int pages[], int n, int capacity) {
    int frames[capacity];
    int used[capacity-1];
    int pageFault = 0;
    int currentSize = 0;
    for(int i=0; i<n; i++) {
        if(isPresent(pages[i], frames, currentSize)) {
            if(currentSize < capacity) frames[currentSize++] = pages[i];
            else {
                for(int j = i-1, a=0; a<capacity-1; j--,a++) {
                    used[a] = pages[j];
                }
                for(int j=0; j<capacity; j++) {
                    if(isPresent(frames[j], used, capacity-1)) {
                        frames[j] = pages[i];
                        break;
                    }
                }
            }
            pageFault++;
        }
        cout << "Page " << pages[i] << " -> ";
        if(currentSize < capacity) {
            for(int j=0; j<currentSize; j++) {
                cout << frames[j] << " ";
            }
        }
        else {
            for(int j=0; j<capacity; j++) {
                cout << frames[j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl << "Total Page Fault = " << pageFault << endl;
    cout << "Total Page Fault Rate = " << ((float)pageFault/n) * 100 << "%" << endl;
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
    LruPageReplacement(pages, n, capacity);
}