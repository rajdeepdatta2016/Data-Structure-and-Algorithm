#include<iostream>
using namespace std;
int main() {

    // It will take input until get any space or tab...
    /*
    string s1;
    cin >> s1;
    cout << s1;
    */

    // getline() function take input until we give enter...
    string s2;
    getline(cin, s2);
    cout << s2 << endl;

    // String Concatination and slicing...
    string s3 = "Rajdeep";
    string s4 = "Dutta";
    cout << s3[3] << endl;
    s4[1] = 'a';
    string s5 = s3+s4;
    cout << s5 << endl;

    // Find size of String...
    cout << s5.size() << endl;
    // get Substring of a String from any Index...
    cout << s5.substr(3) << endl;
    // get Substring from Index 3 of length 4...
    cout << s5.substr(3, 4) << endl;
    // Finding any part of a string...
    cout << s5.find("deep");
}