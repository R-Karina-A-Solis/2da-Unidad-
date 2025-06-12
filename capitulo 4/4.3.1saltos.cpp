#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[] = {1, 3, 3, 4, 5, 5, 6, 9, 10, 12, 12, 15};
    int n = sizeof(array)/sizeof(array[0]);
    int x = 1;

    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2) {
        while (k + b < n && array[k + b] <= x) {
            k += b;
        }
    }

    if (array[k] == x) {
        cout << "x encontrado en el indice " << k << "\n";
    } else {
        cout << "x no encontrado\n";
    }

    return 0;
}

