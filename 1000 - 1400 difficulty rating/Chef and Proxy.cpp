#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll D;
        cin >> D;
        string S;
        cin >> S;

        ll present_days = 0;
        for (char c: S) {
            if (c == 'P') {
                present_days++;
            }
        }

        ll required_present_days = ceil(0.75 * D);

        if (present_days >= required_present_days) {
            cout << 0 << endl;
            continue;
        }

        ll proxy_count = 0;
        for (ll i = 2; i < D - 2; i++) {
            if (S[i] == 'A' &&
                ((S[i - 1] == 'P' || S[i - 2] == 'P') &&
                    (S[i + 1] == 'P' || S[i + 2] == 'P'))) {
                proxy_count++;
                present_days++;
            }
            if (present_days >= required_present_days) {
                break;
            }
        }
        if (present_days >= required_present_days) {
            cout << proxy_count << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
