#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {3, 5, 7, 2, 9, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 9;

    bool ok1 = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) ok1 = true;
    }

    bool ok2 = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            ok2 = true;
            break;
        }
    }

    cout << "No se detiene: " << (ok1 ? "Encontrado" : "No encontrado") << "\n";
    cout << "Se detiene: " << (ok2 ? "Encontrado" : "No encontrado") << "\n";

    return 0;
}

