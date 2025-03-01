#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 1000000;
    bool prime[N + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    long psum[N + 1] = {0}, s = 0;
    for (int i = 2; i <= N; i++) {
        if (prime[i])
            s += i;
        psum[i] = s;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0)
            cout << 2 * n << '\n';
        else {
            long sum = 0;
            if (prime[n])
                sum = psum[n];
            else {
                int p = 0;
                for (p = 3; p * p <= n; p++)
                    if (n % p == 0)
                        break;
                sum = psum[p];
            }
            cout << sum * n << '\n';
        }
    }
    return 0;
}
