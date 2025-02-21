#include <bits/stdc++.h>
using namespace std;

int main() {
    int tcs;
    cin >> tcs;
    while (tcs--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0, rema = n, remb = n;
        int ans = -1;
        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0) {
                if (s[i] == '1') a++;
                rema--;
            }
            else {
                if (s[i] == '1') b++;
                remb--;
            }
            if (a > (b + remb) or b > (a + rema)) {
                ans = i + 1;
                break;
            }
        }
        cout << (ans == -1 ? 2 * n : ans) << endl;
    }
}
