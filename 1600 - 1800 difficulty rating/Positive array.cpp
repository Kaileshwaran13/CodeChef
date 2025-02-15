#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        sort(v.begin(), v.end());
        priority_queue < int, vector < int > , greater < int >> pq;
        pq.push(0);
        for (int i = 0; i < n; i++) {
            int val = pq.top();
            if (val < v[i]) {
                pq.pop();
                pq.push(val + 1);
            } else {
                pq.push(1);
            }
        }
        cout << pq.size() << endl;
    }
    return 0;
}
