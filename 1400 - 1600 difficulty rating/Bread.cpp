#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            sum += x;
            if (sum % k != 0) sum++;
        }
        if (sum % k == 0) 
            cout << sum / k << endl;
        else 
            cout << (sum / k) + 1 << endl;
    }
    return 0;
}
