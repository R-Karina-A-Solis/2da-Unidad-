#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[8] = {3, 5, 7, 2, 9, 1, 4, 0};  
    int n = 7; 
    int x = 6;

    a[n] = x;

    int i = 0;
    bool ok = false;
    for (; a[i] != x; i++); 

    if (i < n) ok = true; 

    cout << "Con centinela: " << (ok ? "Encontrado" : "No encontrado") << "\n";

    return 0;
}

