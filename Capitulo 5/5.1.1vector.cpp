#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);

    cout << v[0] << "\n"; 
    cout << v[1] << "\n";
    cout << v[2] << "\n";

    vector<int> v2 = {2, 4, 2, 5, 1};

    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << "\n";
    }

    for (auto x : v2) {
        cout << x << "\n";
    }

    cout << v2.back() << "\n";
    v2.pop_back();
    cout << v2.back() << "\n";

    return 0;
}

