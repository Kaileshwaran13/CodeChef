#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long binExp(long long a, long long b) {
    long long answer = 1;
    long long current = a;
    while (b > 0)
    {
        if (b & 1)
        {
            answer *= current;
            answer %= mod;
        }
        current *= current;
        current %= mod;
        b = b >> 1;
    }
    return answer;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = binExp(2, n / 2);
        cout << ((3 + n % 2) * ans - 2 + mod) % mod << endl;
    }

    return 0;
}
