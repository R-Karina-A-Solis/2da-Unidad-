#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout << s.count(5) << "\n";

    s.erase(5); 
    cout << s.count(5) << "\n"; 

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.erase(s.find(5)); 
    cout << s.count(5) << "\n";

    return 0;
}

