#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (k == 0)
        k = 0;
    else if (k % 2 == 0)
        k = 2;
    else
        k = 1;
    while (k--) {
        ll mx = * max_element(arr, arr + n);
        for (int i = 0; i < n; i++) {
            arr[i] = (mx - arr[i]);
        }
    }
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    return 0;
}
