#include <bits/stdc++.h>
using namespace std;

void merge_sort(vector<int> &a) {
    if (a.size() <= 1) return;
    int mid = a.size() / 2;
    vector<int> left(a.begin(), a.begin() + mid);
    vector<int> right(a.begin() + mid, a.end());

    merge_sort(left);
    merge_sort(right);

    a.clear();
    int i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) a.push_back(left[i++]);
        else a.push_back(right[j++]);
    }
    while (i < left.size()) a.push_back(left[i++]);
    while (j < right.size()) a.push_back(right[j++]);
}

int main() {
    vector<int> a = {1, 3, 6, 2, 8, 2, 5, 9};
    merge_sort(a);
    for (int x : a) cout << x << " ";
    cout << endl;
}

