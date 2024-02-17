#include<iostream>
using namespace std;

void findWt(int n, int bt[], int wt[], int q) {
    int rt[n];
    for(int i=0; i<n; i++) {
        rt[i] = bt[i];
    }
    int t=0;

    while(true) {
        bool done = true;

        for(int i=0; i<n; i++) {
            if(rt[i] > 0) {
                done = false;

                if(rt[i] > q) {
                    t += q;
                    rt[i] -= q;
                }
                else{
                    t += rt[i];
                    wt[i] = t - bt[i];
                    rt[i] = 0;
                }
            }
        }
        if(done == true) break;
    }
}

void findTat(int n, int bt[], int wt[], int tat[]) {
    for(int i=0; i<n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void findAvgTime(int process[], int n, int bt[], int q) {
    int wt[n], tat[n], totalWt = 0, totalTat = 0;

    findWt(n, bt, wt, q);

    findTat(n, bt, wt, tat);

    cout << "Process  Burst Time  Waiting Time  Turn Around Time" << endl;
    for(int i=0; i<n; i++) {
        totalWt += wt[i];
        totalTat += tat[i];
        cout << " " << process[i] << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
    }

    cout << "\nAverage Waiting Time = " << (float)totalWt/(float)n << endl;
    cout << "Average Turn Around Time = " << (float)totalTat/(float)n << endl;
}

int main() {
    int n,q;
    cout << "Enter Total Process: ";
    cin >>n;
    int process[n], bt[n];
    for(int i=0; i<n; i++) {
        cout << "Enter Process with Burst Time: ";
        cin >> process[i] >> bt[i];
    }

    cout << "Enter Quantum : ";
    cin >> q;

    findAvgTime(process, n, bt, q);
}