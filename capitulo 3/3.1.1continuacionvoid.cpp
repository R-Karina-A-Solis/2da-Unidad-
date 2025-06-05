#include <bits/stdc++.h>
using namespace std;

void f(int n) {
    if (n == 1) return;
    cout << "f(" << n << ")\n";
    f(n - 1);
}
void g(int n) {
    if (n == 1) return;
    cout << "g(" << n << ")\n";
    g(n - 1);
    g(n - 1);
}

int main() {
    int n;

    cout << "Ingrese un valor para n: ";
    cin >> n;

    cout << "\n f(n):" << endl;
    f(n);

    cout << "\n g(n):" << endl;
    g(n);

    return 0;
}

