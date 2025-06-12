#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[] = {1, 3, 3, 4, 5, 5, 6, 9, 10, 12, 12, 15};
    int n = sizeof(array)/sizeof(array[0]);
    int x = 9; 

    int a = 0, b = n - 1;
    while (a <= b) {
        int k = (a + b) / 2;
        if (array[k] == x) {
            cout << "x encontrado en el indice " << k << "\n";
            break;
        }
        if (array[k] < x) a = k + 1;
        else b = k - 1;
    }

    return 0;
}

