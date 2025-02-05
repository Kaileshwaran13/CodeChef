#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long h = 0, v = 0, f = 0;
        for (i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            k = s.length();
            if (s.length() >= 3 && s.substr(k - 3, 3) == "man")
                ++h;
            else

            ++v;
            if (h >= (v + 2) && f == 0)
                f = 1;
            if (v >= (h + 3) && f == 0)
                f = 2;
        }
        if (f == 1)
            cout << "superheroes\n";
        else if (f == 2)
            cout << "villains\n";
        else
            cout << "draw\n";
    }
    return 0;
}
