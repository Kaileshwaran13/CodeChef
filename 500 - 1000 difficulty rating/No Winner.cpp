#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        int d1 = abs(a - b);
        int d2 = abs(b - c);
        int d3 = abs(a - c);
        if (d1 <= m || d2 <= m || d3 <= m)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";

    }

}
