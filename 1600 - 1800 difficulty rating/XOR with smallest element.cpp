#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        priority_queue < int, vector < int > , greater < int >> pq;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            pq.push(a);
        }
        int a;
        while (y) {
            a = pq.top();
            pq.pop();
            a ^= x;
            y--;
            if (a <= pq.top()) {
                if (y & 1)
                    pq.push(a ^ x);
                else pq.push(a);
                break;
            }
            else pq.push(a);
        }
        while (!pq.empty()) {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }
}
