#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string s[n];
        set < long long > st1;
        for (long long i = 0; i < n; i++) {
            cin >> s[i];

            long long x = 0, pos1;
            for (long long j = 0; j < k; j++) {
                if (s[i][j] == '1') {
                    x++;
                    pos1 = j;
                }
            }
            if (x == 1) {
                st1.insert(pos1);
            }
        }
        if (st1.size() == k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}
