#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(1);                               // {1}
    ms.insert(1);                               // {1, 1}
    ms.insert(1);                               // {1, 1, 1}
    ms.insert(2);                               // {1, 1, 1, 2}
    ms.insert(2);                               // {1, 1, 1, 2, 2}
    ms.insert(3);                               // {1, 1, 1, 2, 2, 3}
    ms.erase(1);                                // {2, 2, 3}
    ms.erase(ms.find(2));                       // {2, 3}

    ms.insert(1);                               // {1, 2, 3}
    ms.insert(1);                               // {1, 1, 2, 3}
    ms.insert(1);                               // {1, 1, 1, 2, 3}
    ms.erase(ms.find(1), next(ms.find(1), 2));  // {1, 2, 3}
}