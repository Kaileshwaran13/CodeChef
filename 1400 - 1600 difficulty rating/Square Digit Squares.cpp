#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkdig(ll num) {
    while (num > 0) {
        int n = num % 10;
        if (n != 1 && n != 0 && n != 4 && n != 9) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll st = ceil(sqrt(a));
        ll en = ceil(sqrt(b));
        ll cnt = 0;
        for (ll i = st; i <= en; i++) {
            if (checkdig(i * i)) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
