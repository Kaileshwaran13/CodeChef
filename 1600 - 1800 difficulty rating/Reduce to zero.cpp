#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << a << endl;
            continue;
        }
        if (a > b)
        {
            swap(a, b);
        }
        if (a == 0)
        {
            cout << -1 << endl;
            continue;
        }
        long long ans = 0;
        while (a * 2 <= b)
        {
            a = a * 2;
            ans++;
        }
        if (a != b)
        {
            ans++;
        }
        cout << ans + b << endl;
    }
    return 0;
}
