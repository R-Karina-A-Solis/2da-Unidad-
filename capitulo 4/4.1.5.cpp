#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {4,2,5,3,5,8,3};
    sort(v.begin(),v.end());

    for (auto x : v) cout << x << " ";
    cout << "\n";

    sort(v.rbegin(),v.rend());
    for (auto x : v) cout << x << " ";
    cout << "\n";

    int a[] = {4,2,5,3,5,8,3};
    int n = 7;
    sort(a,a+n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    string s = "monkey";
    sort(s.begin(), s.end());
    cout << s << "\n";

    vector<pair<int,int>> p;
    p.push_back({1,5});
    p.push_back({2,3});
    p.push_back({1,2});
    sort(p.begin(), p.end());
    for (auto pr : p) cout << "(" << pr.first << "," << pr.second << ") ";
    cout << "\n";

    vector<tuple<int,int,int>> t;
    t.push_back({2,1,4});
    t.push_back({1,5,3});
    t.push_back({2,1,3});
    sort(t.begin(), t.end());
    for (auto [x,y,z] : t) cout << "(" << x << "," << y << "," << z << ") ";
    cout << "\n";
}

