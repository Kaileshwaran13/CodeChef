#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, q;
        cin >> n >> c >> q;
        int l, r;
        for (int j = 0; j < q; j++)
        {
            cin >> l >> r;
            if (c >= l && c <= r)
            {
                c = r - c + l;
            }
        }
        cout << c << '\n';
    }
}
