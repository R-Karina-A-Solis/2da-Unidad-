#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> events;
    events.push_back({1,1});
    events.push_back({2,1});
    events.push_back({4,1});
    events.push_back({5,-1});
    events.push_back({6,-1});
    events.push_back({7,1});
    events.push_back({8,-1});
    events.push_back({9,-1});

    sort(events.begin(), events.end());

    int res = 0, sum = 0;
    for (auto [t,x] : events) {
        sum += x;
        res = max(res,sum);
    }

    cout << res << "\n";
}

