#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int hash[110] = {0};
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            hash[a[i]]++;
        }
        int m = 0, ans = 0;
        for (int i = 1; i < 101; i++) {
            if (hash[i] > m) {
                ans += (m * (m - 1) / 2);
                m = hash[i];
            }
            else {
                ans += hash[i] * (hash[i] - 1) / 2;
            }

        }
        m += hash[0];
        cout << int(m * (m - 1) / 2) + ans << "\n";
    }

    return 0;
}
