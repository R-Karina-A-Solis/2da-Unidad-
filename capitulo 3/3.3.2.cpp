#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Ingresa el tamaño de la matriz cuadrada: ";
    cin >> n;

    int x[n][n];
    long long s = 0;

    cout << "Ingresa los " << n * n << " elementos de la matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s += x[i][j];
        }
    }
    cout << "Suma por filas : " << s << endl;

    s = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s += x[j][i];
        }
    }
    cout << "Suma por columnas : " << s << endl;

    return 0;
}

