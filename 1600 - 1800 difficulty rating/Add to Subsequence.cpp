#include "bits/stdc++.h"
using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        map < int, int > mp;
        for (int i = 0, temp; i < n; i++) {
            cin >> temp;
            mp[temp]++;
        }
        int mx = 0;
        for (auto it: mp) {
            mx = max(mx, it.second);
        }
        cout << (int) ceil(log2(mx)) << "\n";
    }
    return 0;
}
