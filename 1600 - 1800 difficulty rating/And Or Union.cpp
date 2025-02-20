#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int bit[31] = {0};
        for (int i = 0; i < n; i++) {
            int j = 0;
            while (arr[i] > 0)
            {
                if (arr[i] & 1) bit[j] += 1;
                j++;
                arr[i] >>= 1;
            }
        }
        long long ans = 0;
        for (int i = 30; i >= 0; --i) {
            if (bit[i] > 1) ans += (1 << i);
        }
        cout << ans << '\n';
    }
}
