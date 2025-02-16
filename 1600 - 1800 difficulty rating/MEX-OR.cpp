#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _ += 1)
    {
        int N;
        cin >> N;
        int res = 1;
        while (N + 1 >= res * 2)
            res *= 2;
        cout << res << "\n";
    }
    return 0;
}
