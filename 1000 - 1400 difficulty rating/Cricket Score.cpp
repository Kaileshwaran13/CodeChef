#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long r[n], w[n];
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> r[i] >> w[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (r[i] > r[i + 1] || w[i] > w[i + 1])
        {
            flag = 0;
            break;
        }
        if (w[i] == 10 && i != n - 1)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
