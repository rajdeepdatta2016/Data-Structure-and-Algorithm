#include <iostream>
using namespace std;

// Function to check if a page is present in memory
bool findPage(int page, int *pages, int n) {
    for (int i = 0; i < n; i++) {
        if (pages[i] == page) {
            return true;
        }
    }
    return false;
}

// Function to implement FIFO page replacement
void fifoPageReplacement(int pages[], int n, int capacity) {
    int frame[capacity];
    int pageFaults = 0;
    int currentSize = 0;
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (!findPage(pages[i], frame, currentSize)) {
            if (currentSize < capacity) {
                frame[currentSize] = pages[i];
                currentSize++;
            } else {
                frame[index] = pages[i];
                index = (index + 1) % capacity;
            }
            pageFaults++;
        }
        cout << "Page " << pages[i] << " -> ";
        for (int j = 0; j < currentSize; j++) {
            cout << frame[j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Total page faults: " << pageFaults << endl;
}

// Driver code
int main() {
    int n, capacity;
    cout << "Enter the number of pages: ";
    cin >> n;
    int pages[n];
    cout << endl << "Enter the pages: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    cout << endl << "Enter the capacity of the memory: ";
    cin >> capacity;
    cout << endl;
    fifoPageReplacement(pages, n, capacity);

    return 0;
}