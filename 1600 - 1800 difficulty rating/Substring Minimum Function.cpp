#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t = 1, tc = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long ans = 0;
        int cntInType1 = (n - m) / (m + 1);
        int cntInType2 = cntInType1;
        int type1 = m + 1, type2 = 0;
        int rem = n - m - (m + 1) * cntInType1;
        if (rem) {
            cntInType1++;
            type1 = rem;
            type2 = m + 1 - type1;
        }
        ans += type1 * 1LL * cntInType1 * (cntInType1 + 1) / 2;
        ans += type2 * 1LL * cntInType2 * (cntInType2 + 1) / 2;
        cout << ans << '\n';
    }
}
