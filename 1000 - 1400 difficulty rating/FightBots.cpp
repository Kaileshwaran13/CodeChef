#include <bits/stdc++.h>

#define lil long long int
const int MOD = 1e9 + 7;
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        lil n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int a = 0, b = 0, d = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R') a++;
            else if (s[i] == 'L') a--;
            else if (s[i] == 'U') b++;
            else b--;

            d = abs(a - x) + abs(b - y);
            //  cout<<a<<" "<<b<<endl;;
            if (d == (i + 1)) {
                d = -1;
                break;
            }
        }
        if (d == -1) cout << "Yes\n";
        else cout << "No\n";
    }

}
