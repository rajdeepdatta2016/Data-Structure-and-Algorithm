#include<iostream>
using namespace std;
void findWt(int n, int bt[], int wt[]) {
    wt[0] = 0;
    for(int i=1; i<n; i++) {
        wt[i] = wt[i-1] + bt[i-1];
    }
}

void findTat(int n, int bt[], int wt[], int tat[]) {
    for(int i=0; i<n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void findAvg(int process[], int n, int bt[]) {
    int wt[n], tat[n], totalWt = 0, totalTat = 0;

    findWt(n, bt, wt);
    findTat(n, bt, wt, tat);

    cout << "Process  Burst Time  Waiting Time  Turn Around Time" << endl;

    for(int i=0; i<n; i++) {
        totalWt += wt[i];
        totalTat += tat[i];
        cout << " " << process[i] << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
    }
    cout << endl;
    cout << "Average Waiting Time = " << (float)totalWt/(float)n << endl;
    cout << "Average Turn Around Time = " << (float)totalTat/(float)n;
}

int main() {
    int n;
    cout <<"Enter Total Process: ";
    cin >> n;
    int process[n], bt[n];
    for(int i=0; i<n; i++) {
        cout << "Enter Process with Burst Time : ";
        cin >> process[i] >> bt[i];
    }
    findAvg(process, n, bt);
    return 0;
}