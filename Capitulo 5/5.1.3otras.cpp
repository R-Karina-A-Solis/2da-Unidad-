#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(5);
    d.push_back(2);
    d.push_front(3);
    d.pop_back();
    d.pop_front();

    stack<int> s;
    s.push(2);
    s.push(5);
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";

    queue<int> q;
    q.push(2);
    q.push(5);
    cout << q.front() << "\n";
    q.pop();
    cout << q.back() << "\n";

    return 0;
}

