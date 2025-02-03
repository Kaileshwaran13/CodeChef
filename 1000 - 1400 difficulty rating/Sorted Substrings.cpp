#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        int c1 = 0;
        int a[100000];
        for (int i = 0; i < n; i++)
            a[i] = st[i] - '0';
        int c2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (st[i] > st[i + 1])
                c1++;
        }
        cout << c1 << endl;
    }
    return 0;
}
