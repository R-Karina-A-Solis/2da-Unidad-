#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    vector<int> v = {5, 2, 3, 2, 5, 1, 4, 4, 3, 2};

    set<int> s1(v.begin(), v.end());
    cout << "Con set: " << s1.size() << "\n";

    unordered_set<int> s2(v.begin(), v.end());
    cout << "Con unordered_set: " << s2.size() << "\n";

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << "Con sort + unique: " << v.size() << "\n";

    return 0;
}

