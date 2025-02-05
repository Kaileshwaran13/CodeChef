#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mod = 1e9 + 7;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map < char, int > mp;
        for (int i = 0; i < n; i++) mp[s[i]]++;
        long long total = 1;
        for (auto x: mp)
        {
            total *= (x.second + 1);
            total %= mod;
        }

        cout << total - 1 << endl;
    }
}
