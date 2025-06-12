#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);

    cout << q.top() << "\n"; 
    q.pop();

    cout << q.top() << "\n"; 
    q.pop();

    q.push(6);
    cout << q.top() << "\n"; 
    q.pop();

    return 0;
}

