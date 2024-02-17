#include<bits/stdc++.h>
using namespace std;

// Function for reverse the Character Array...
void func(char *str) 
{
    int n = 0, i = 0;

    // Finding the size of the Character Array...
    while(str[i] != '\0') {   
        n++;
        i++;
    }
    i=0;
    int j=n-1;

    // Reverse the Character Array...
    while(i<j) {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

// Driver Code...
int main()
{
    char ch[100001];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>ch;
        func(ch);
        cout<<ch;
	cout<<endl;
    }
}