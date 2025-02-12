#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool solve(ll n) {
    ll count = 0;
    while (n) {
        if (n % 10 == 3)
            count++;
        n /= 10;
    }
    if (count >= 3)
        return true;
    else
        return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        n++;
        while (!solve(n)) {
            n++;
        }
        cout << n << endl;
    }
}
