#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, c;

    cout << "Ingrese el valor para n: ";
    cin >> n;

    cout << "Ingrese el valor para a: ";
    cin >> a;

    cout << "Ingrese el valor para b: ";
    cin >> b;

    a++;
    b++;
    c = a + b;
    cout << "\n O(1) operaciones: a = " << a << ", b = " << b << ", c = " << c << endl;

    cout << "\n O(n) operaciones:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "i = " << i << endl;
    }

    cout << "\n O(n^2) operaciones:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    cout << "\n O(n) con bucle hasta 3*n:" << endl;
    for (int i = 1; i <= 3 * n; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "\n O(n) con bucle hasta n+5:" << endl;
    for (int i = 1; i <= n + 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "\n O(n) n/2:" << endl;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

