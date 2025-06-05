#include <bits/stdc++.h>
using namespace std;

int collatz(int n) {
    if (n % 2 == 0) return n / 2;
    else return 3 * n + 1;
}

void test(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
}

int main() {
    int n;

    cout << "Ingrese un valor para n: ";
    cin >> n;

    cout << "collatz(" << n << ") = " << collatz(n) << "\n";

    test(n);

    int c = 0;
    for (int i = 1; i <= n; i++) {
        c += __builtin_popcount(i);
    }
    cout << "Suma de bits en 1 de 1 a " << n << ": " << c << "\n";

    return 0;
}

