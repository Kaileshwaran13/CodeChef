#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    long N;
    cin >> T;
    while (T--) {
        cin >> N;
        int bits = floor(log2(N)) + 1;
        int ans = max(N - pow(2, bits - 1) + 1, pow(2, bits - 2));
        cout << ans << "\n";

    }
    return 0;
}
