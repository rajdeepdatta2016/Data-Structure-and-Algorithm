#include<bits/stdc++.h>
using namespace std;
#include "CreateTemplate.cpp"

int main() {
    Pair<int,int> p1;
    p1.setX(10);
    p1.setY(20);
    cout << p1.getX() << " " << p1.getY() << endl;

    Pair<double, double> p2;
    p2.setX(10.8348);
    p2.setY(23.2833);
    cout << p2.getX() << " " << p2.getY() << endl;
    
    Pair<char, char> p3;
    p3.setX('T');
    p3.setY('R');
    cout << p3.getX() << " " << p3.getY() << endl;

    Pair<Pair<int,double>,char> p4;
    Pair<int, double> temp;
    temp.setX(42);
    temp.setY(14.3423);
    p4.setX(temp);
    p4.setY('T');
    cout << p4.getX().getX() << " " << p4.getX().getY() << " " << p4.getY() << endl;
}