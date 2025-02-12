#include <bits/stdc++.h>
using namespace std;
#define MODULO 1000000007

long long power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long base = 3;
    long long extra = 1;
    int i = 0;
    while (n > 1)
    {

        if (n & 1)
        {
            extra = (extra * base) % MODULO;
        }
        base = (base * base) % MODULO;
        n >>= 1;
    }
    long long ans = (base * extra) % MODULO;
    return ans;
}


int main() {
    int T;
    cin >> T;
    long long A = 4 * 3;
    long long B = 4 * 3 * 2;
    while (T--)
    {
        int N;
        cin >> N;
        if (N == 2)
        {
            cout << A << endl;
        }
        else if (N == 3)
        {
            cout << B << endl;
        }
        else
        {
            N -= 4;
            long long ans {};
            A = 4 * 3;
            B = 4 * 3 * 2;
            if ((N & 1) == 0)
            {
                long long factor = 2 * power(N) + 3;
                ans = ((factor - 1) * B) % MODULO + (factor * A) % MODULO;
                ans %= MODULO;
                ans += ((power(N) - 9) * B / 4) % MODULO + ((power(N) - 9) * A / 4) % MODULO;
                ans %= MODULO;
                cout << ans << endl;
            }
            else
            {
                long long factor = 2 * power(N);
                ans = ((factor + 1) * B) % MODULO + (factor * A) % MODULO;
                ans %= MODULO;
                ans += ((power(N) - 3) * B / 4) % MODULO + ((power(N) - 3) * A / 4) % MODULO;
                ans %= MODULO;
                cout << ans << endl;
            }
        }
    }
    return 0;

}
