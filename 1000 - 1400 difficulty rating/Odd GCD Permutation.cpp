#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << -1 << '\n';
            continue;
        }
        for (int i = n; i > 0; i--)
            cout << i << " ";
        cout << '\n';
    }
}
