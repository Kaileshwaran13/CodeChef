#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long int n;
        cin >> n;
        long long int a[n], v[n];
        for (int i = 0; i < n; i++)
            cin >> a[i] >> v[i];
        int ans = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                z = a[i] * v[j] + a[j] * v[i];
                ans = max(ans, z);
            }
        }
        cout << ans << endl;


    }

}
