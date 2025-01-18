#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        long long m1, m2, i;
        m1 = -(n - 1);
        m2 = n + 1;
        string s;
        if (x < m1 || x > m2)
        {
            cout << "-1";
        }
        else
        {
            if (x < 1)
            {
                long long c1 = x - m1;
                for (i = 0; i < c1; i++)
                {
                    cout << "*";
                }
                for (i = c1; i < n; i++)
                {
                    cout << "-";
                }
            }
            else
            {
                long long c = m2 - x;
                for (i = 0; i < c; i++)
                {
                    cout << "*";
                }
                for (i = c; i < n; i++)
                {
                    cout << "+";
                }
            }
        }
        cout << '\n';
    }
}
