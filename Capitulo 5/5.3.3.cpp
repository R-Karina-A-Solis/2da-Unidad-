#include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 100000; 
    vector<int> a(n), b(n);
    srand(time(0));

    for (int i = 0; i < n; i++) {
        a[i] = rand();
        b[i] = rand();
    }

    multiset<int> ms;
    for (int i = 0; i < n; i++) {
        ms.insert(a[i]);
    }
    for (int i = 0; i < n; i++) {
        ms.erase(ms.begin()); 
        ms.insert(b[i]);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        pq.push(a[i]);
    }
    for (int i = 0; i < n; i++) {
        pq.pop(); 
        pq.push(b[i]);
    }

    cout << "Finalizado\n";
    return 0;
}

