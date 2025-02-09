#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, q;
    cin >> n >> q;
    vector < ll > roots(n), queries(q);
    unordered_set < ll > us;
    for (ll i = 0; i < n; i++) {
        cin >> roots[i];
        us.insert(roots[i]);
    }
    for (ll i = 0; i < q; i++) cin >> queries[i];
    sort(roots.begin(), roots.end());
    for (ll i = 0; i < q; i++) {
        if (queries[i] > roots[n - 1]) cout << "POSITIVE" << endl;
        else if (us.find(queries[i]) != us.end()) cout << "0" << endl;
        else {
            if (n & 1) {
                if (queries[i] < roots[0]) cout << "NEGATIVE" << endl;
                else {
                    int j = lower_bound(roots.begin(), roots.end(), queries[i]) - roots.begin();
                    if (j & 1) cout << "POSITIVE" << endl;
                    else cout << "NEGATIVE" << endl;
                }
            }
            else {
                if (queries[i] < roots[0]) cout << "POSITIVE" << endl;
                else {
                    int j = lower_bound(roots.begin(), roots.end(), queries[i]) - roots.begin();
                    if (j & 1) cout << "NEGATIVE" << endl;
                    else cout << "POSITIVE" << endl;
                }
            }
        }
    }
    return 0;
}
