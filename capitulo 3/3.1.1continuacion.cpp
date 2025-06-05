#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    cout << "Ingrese un valor para n: ";
    cin >> n;

    cout << "Ingrese un valor para m: ";
    cin >> m;

    cout << "\n O(n^2) :" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    cout << "\n Algoritmo con 3 fases (O(n), O(n^2), O(n)):" << endl;

    cout << "Fase o(n):" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Fase o(n^2):" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    cout << "Fase o(n):" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "\n O(nm), (n = " << n << ", m = " << m << " ): " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    return 0;
}

