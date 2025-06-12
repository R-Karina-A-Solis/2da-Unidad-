#include <bits/stdc++.h>
using namespace std;

int k = 8;
vector<int> p = {2, 3, 7}; 

bool valid(int x) {
    long long jobs = 0;
    for (int t : p) jobs += x / t;
    return jobs >= k;
}

int main() {
    int x = -1;
    int z = k * p[0]; 
    for (int b = z; b >= 1; b /= 2) {
        while (!valid(x + b)) x += b;
    }

    int res = x + 1;
    cout << "Tiempo mínimo necesario: " << res << "\n";
    return 0;
}

