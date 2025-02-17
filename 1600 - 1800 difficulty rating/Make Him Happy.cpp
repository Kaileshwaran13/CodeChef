#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int A[n];
    map < int, int > m, l;
    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (m.count(A[i]) == 0) 
            m[A[i]] = i + 1;
        l[A[i]] = i + 1;
    }
    for (auto i: m) {
        int a = i.first;
        if (a >= k) 
            continue;
        int b = k - a;
        if (a == b) 
            continue;
        if (m.count(b)) {
            int ma = min(m[a], n - l[a] + 1);
            int mb = min(m[b], n - l[b] + 1);
            ans = min(ans, max(ma, mb));
        }
    }
    if (ans == 1e9) 
        cout << -1 << endl;
    else 
        cout << ans << endl;
    return 0;
}
