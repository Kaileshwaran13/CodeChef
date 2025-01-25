#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, m, p;
        cin >> x >> y;
        m = x;
        p = x;
        for (int i = 1; i <= y; i++)
        {
            p = p + 1000;
            m = m * 2;
            if (p >= m)
            {
                m = p;
            }
            else if (m >= p)
            {
                p = m;
            }
        }
        cout << m << endl;
    }

}
