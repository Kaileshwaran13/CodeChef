#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float n, w, wr;
        cin >> n >> w >> wr;
        vector < int > v(n);
        for (auto & ele: v)
            cin >> ele;

        if (wr >= w) {
            cout << "YES\n";
            continue;
        }
        if (n == 1) {
            cout << "NO\n";
            continue;
        }
        float wp = (w - wr) / 2;

        sort(v.begin(), v.end());

        long long sum = 0;
        int i = 0;
        while (i < n - 1) {
            if (v[i] == v[i + 1]) {
                sum += v[i];
                i += 2;
            }
            else i++;
        }

        if (sum >= wp)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
