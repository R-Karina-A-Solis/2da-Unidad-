#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int M = 1e9 + 7;

int main() {
    int n;
    cout << "Ingresa un numero (n): ";
    cin >> n;

    ll f = 1;
    for (int i = 1; i <= n; i++) {
        f = (f * i) % M;
    }
    cout << "Factorial con metodo clasico: " << f << "\n";

    if (n % 2 != 0) n--; 
    ll f1 = 1, f2 = 1;
    for (int i = 1; i <= n; i += 2) {
        f1 = (f1 * i) % M;       
        f2 = (f2 * (i + 1)) % M; 
    }
    ll f_parallel = (f1 * f2) % M;
    cout << "Factorial con paralelismo simulado: " << f_parallel << "\n";

    return 0;
}

