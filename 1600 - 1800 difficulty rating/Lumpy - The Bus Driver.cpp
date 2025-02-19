#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> c >> b;
        vector < long long > v(a);
        for (long long i = 0; i < a; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long cnt = 0;
        for (long long i = 0; i < a; i++) {
            long long d = min(b, (v[i] / 2));
            if (((d * 2) + c) >= v[i]) {
                c -= (v[i] - (2 * d));
                b -= d;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
