#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int answer = 0;
        for (int i = 1; i <= n; i++) {
            long int x;
            cin >> x;
            if (x % 2 == 0) answer++;
        }
        if (answer == n) {
            cout << 0 << endl;
            continue;
        }
        cout << answer << endl;
    }
}
