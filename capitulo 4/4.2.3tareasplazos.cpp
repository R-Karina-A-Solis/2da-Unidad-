#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> v = {{4,2},{3,10},{2,8},{4,15}};
    sort(v.begin(), v.end());

    int t = 0;
    long long ans = 0;
    for (auto [a,b] : v) {
        t += a;
        ans += b - t;
    }

    cout << ans << "\n";
}


