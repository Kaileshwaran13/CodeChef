#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int g;
        cin >> g;
        int a[n - 1];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            g = gcd(g, a[i]);
        }
        cout << g << '\n';
    }
}
