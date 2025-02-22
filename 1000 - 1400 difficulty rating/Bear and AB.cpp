#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        long long t_b = 0, t_a = 0;
        for (char ch: s) {
            if (ch == 'b') 
                t_b++;
            if (ch == 'a') 
                t_a++;
        }
        vector < long long > sv;
        sv.push_back(t_b);
        long long cpy = t_b, t_abs = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b' && cpy > 0) 
                cpy--;
            if (s[i] == 'a') 
                t_abs += cpy;
        }
        t_abs *= k;
        long long ans = t_a * t_b * (k * (k - 1) / 2);
        ans += t_abs;
        cout << ans << "\n";
    }
    return 0;
}
