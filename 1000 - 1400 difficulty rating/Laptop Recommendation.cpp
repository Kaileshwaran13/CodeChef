#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxi = 0, ans;
        cin >> n;
        int a[n], freq[11] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            if (maxi < freq[a[i]])
            {
                ans = a[i];
                maxi = freq[a[i]];
            }
        }
        int repeat = -1;
        for (int i = 0; i < 11; i++)
        {
            if (freq[i] == maxi)
                repeat++;
        }
        if (repeat)
            cout << "CONFUSED" << '\n';
        else
            cout << ans << '\n';
    }
}
