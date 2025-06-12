#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;

    cout << m["banana"] << "\n"; 

    cout << m["aybabtu"] << "\n"; 

    if (m.count("aybabtu")) {
        cout << "La clave 'aybabtu' existe.\n";
    }
    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}

