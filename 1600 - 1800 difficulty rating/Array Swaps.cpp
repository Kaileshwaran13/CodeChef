#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;
    vector < ll > va(n), vb(m);
    for (auto & ele: va)
        cin >> ele;
    for (auto & ele: vb)
        cin >> ele;
    ll mina = INT_MAX;
    for (ll i = 0; i < n; i++)
        mina = min(mina, va[i]);
    sort(vb.begin(), vb.end());
    ll count = 0;
    for (ll i = 0; i < m; i++) {
        if (vb[i] < mina)
            count++;
        else
            break;
    }
    ll swaps = count * n;
    cout << swaps << "\n";

    return 0;
}
