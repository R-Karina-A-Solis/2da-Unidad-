#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3) << "\n"; 
    cout << s.count(4) << "\n"; 

    s.erase(3);
    s.insert(4);
    cout << s.count(3) << "\n"; 
    cout << s.count(4) << "\n"; 

    s.insert(3);
    s.insert(3);
    s.insert(3);
    cout << s.count(3) << "\n"; 

    cout << s.size() << "\n";
    for (auto x : s) {
        cout << x << "\n";
    }

    return 0;
}

