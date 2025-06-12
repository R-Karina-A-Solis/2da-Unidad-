#include <bits/stdc++.h>
using namespace std;

int main() {
    const int N = 1e6; 
    vector<int> v(N);
    srand(time(0));

    for (int i = 0; i < N; i++) {
        v[i] = 1 + rand() % 1000000;
    }

    map<int, int> freq_map;
    for (auto x : v) {
        freq_map[x]++;
    }

    int max_val = 0;
    int max_freq = 0;
    for (auto p : freq_map) {
        if (p.second > max_freq) {
            max_freq = p.second;
            max_val = p.first;
        }
    }

    cout << "Más frecuente (map): " << max_val << " con frecuencia " << max_freq << "\n";

    const int MAXVAL = 1e6 + 1;
    vector<int> freq_array(MAXVAL, 0);

    for (auto x : v) {
        freq_array[x]++;
    }

    max_val = 0;
    max_freq = 0;
    for (int i = 0; i < MAXVAL; i++) {
        if (freq_array[i] > max_freq) {
            max_freq = freq_array[i];
            max_val = i;
        }
    }

    cout << "Más frecuente (array): " << max_val << " con frecuencia " << max_freq << "\n";

    return 0;
}

