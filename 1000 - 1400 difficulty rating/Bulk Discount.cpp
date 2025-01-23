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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + max(0, a[i] - i);
        }
        cout << sum << endl;
    }
}
