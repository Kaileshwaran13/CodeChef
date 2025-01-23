#include <iostream>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int v = arr[n - 1];
    if (m >= v + k - 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return;
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
