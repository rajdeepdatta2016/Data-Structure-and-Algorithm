#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	while(x--) {
		int n, m;
		cin >> n >> m;
		int** p = new int* [n];
		for(int i=0; i<n; i++) {
			p[i] = new int [m];
			for(int j=0; j<m; j++) {
				cin >> p[i][j];
			}
		}

		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cout << p[j][i] << " ";
			}
			cout << endl;
		}

		for(int i=0; i<n; i++) {
			delete p[i];
		}
		delete [] p;
	}
}