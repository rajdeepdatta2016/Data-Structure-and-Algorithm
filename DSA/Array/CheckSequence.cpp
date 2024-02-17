#include<bits/stdc++.h>
using namespace std;

bool checksequenece(char large[] , char*small) {
    int prevAdd = -1;
    int size1 = strlen(small);
    int size2 = strlen(large);
    for(int i=0; i<size1; i++) {
        bool isPresent = false;
        for(int j=prevAdd+1; j<size2; j++) {
            if(small[i] == large[j]) {
                isPresent = true;
                prevAdd = j;
                break;
            }
        }
        if(isPresent == false) return false;
    }
    return true;
}

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";
}

// Time Complexity = O(nm)...
// Space Complexity = O(1)...