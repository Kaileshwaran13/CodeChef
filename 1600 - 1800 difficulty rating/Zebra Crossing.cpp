#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0, idx = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) 
                count++;
            if (count % 2 == k % 2) 
                idx = i;
        }
        if (count >= k) 
            cout << idx + 1 << endl;
        else 
            cout << -1 << endl;
    }
    return 0;
}
