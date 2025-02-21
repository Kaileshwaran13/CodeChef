#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long Ans[t + 1];
    for (long long j = 1; j <= t; j++)
    {
        long long A, B, C, D, K;
        cin >> A >> B >> C >> D >> K;
        long long k;
        long long a = gcd(A, B);
        long long b = gcd(C, D);
        long long c = gcd(a, b);
        a = a / c;
        k = K / a;
        k /= b;

        Ans[j] = 2 * k + 1;

    }
    for (long long j = 1; j <= t; j++)
    {
        cout << Ans[j] << endl;
    }
}
