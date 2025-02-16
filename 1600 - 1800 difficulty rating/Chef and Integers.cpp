#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector < long long > v;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            v.push_back(a[i]);
        }
    }
    long long x;
    cin >> x;
    sort(v.begin(), v.end(), greater < int > ());
    int s = v.size();
    if (s < x) {
        long long ans = 0;
        for (int i = 0; i < s; i++) {
            ans += abs(v[i]);
        }
        cout << ans << endl;
    } else {
        int ind = s - x;
        long long ans = 0;
        ans += abs(v[ind]) * x;
        for (int i = ind + 1; i < s; i++) {
            v[i] += abs(v[ind]);
            ans += abs(v[i]);
        }
        cout << ans << endl;
    }
}
