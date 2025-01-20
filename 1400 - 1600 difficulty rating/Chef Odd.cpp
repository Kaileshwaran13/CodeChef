#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        int odd;
        if (n % 2 == 0)
            odd = n / 2;
        else
            odd = n / 2 + 1;
        if (n >= 2 * k)
        {
            int ans = odd - k;
            if (ans % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
