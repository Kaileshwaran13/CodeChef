#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, ai, bi, maxAi[2001], index, minimumNumberOfBombs;
    cin >> tt;
    while (tt--) {
        index = -1;
        minimumNumberOfBombs = 0;
        fill_n(maxAi, 2001, -1);
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ai >> bi;
            maxAi[bi] = max(ai, maxAi[bi]);
        }
        for (int i = 0; i <= 2000; i++) {
            if (index < maxAi[i]) {
                minimumNumberOfBombs++;
                index = i;
            }
            maxAi[i] = -1;
        }
        cout << minimumNumberOfBombs << endl;
    }

    return 0;
}
