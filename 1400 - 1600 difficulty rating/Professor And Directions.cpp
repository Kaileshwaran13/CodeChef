#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = " ";
    int n, t, count = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> a;
        count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                count++;
            }
        }
        if (count == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
