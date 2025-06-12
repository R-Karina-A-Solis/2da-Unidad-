#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> v = {{3,5},{2,3},{1,8}};
    sort(v.begin(), v.end(), [](auto a, auto b) {
        return a.second < b.second;
    });

    int x = 0, ans = 0;
    for (auto [a,b] : v) {
        if (a >= x) {
            ans++;
            x = b;
        }
    }

    cout << ans << "\n";
}

