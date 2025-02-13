#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int weights[n];
        int lengths[n];
        for (int i = 0; i < n; i++) cin >> weights[i];
        for (int i = 0; i < n; i++) cin >> lengths[i];
        vector < pair < int, int >> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = {
                weights[i],
                i
            };
        }
        sort(v.begin(), v.end());
        int lastpos = v[0].second;
        int moves = 0;
        for (int i = 1; i < n; i++) {
            int currentpos = v[i].second;
            int index = v[i].second;
            while (currentpos <= lastpos) {
                currentpos += lengths[index];
                moves++;
            }
            lastpos = currentpos;
        }
        cout << moves << endl;
    }
    return 0;

}
