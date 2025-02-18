#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        long long x1, y1;
        cin >> x1 >> y1;
        long long q;
        cin >> q;
        long long l = 0, r = 0, u = 0, d = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
                l++;
            else if (s[i] == 'U')
                u++;
            else if (s[i] == 'R')
                r++;
            else
                d++;
        }
        for (int i = 0; i < q; i++)
        {
            long long x2, y2;
            cin >> x2 >> y2;
            long long t1 = x2 - x1;
            long long L = 0, R = 0, D = 0, U = 0;
            if (t1 < 0)
                L = abs(t1);
            else
                R = t1;
            t1 = y2 - y1;
            if (t1 < 0)
                D = abs(t1);
            else
                U = t1;
            long long sum = L + D + R + U;
            if (L <= l && U <= u && R <= r && D <= d)
                cout << "YES " << sum << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}
