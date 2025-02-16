#include <bits/stdc++.h>
using namespace std;

long long combi(long long n, long long k) {
    if (k > n - k)
        k = n - k;
    long long res = 1;
    for (long long i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector < long long > m(101);
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            m[a]++;
        }
        long long ct = 1;
        for (int i = 1; i < 101; i++) {
            if (m[i] >= k) {
                ct = combi(m[i], k);
                break;
            }
            else k -= m[i];
        }
        cout << ct << endl;
    }
}
