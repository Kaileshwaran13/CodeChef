#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], c = 0;
        long int ans = 1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max = 0;
        for (int i = 0; i < n; i++)
            if (max < a[i]) max = a[i];
        for (int i = 0; i < n; i++)
            if (a[i] == max) c++;
        while (c--)
            ans = ((ans * 2) % mod);
        cout << ans - 1 << "\n";
    }
}
