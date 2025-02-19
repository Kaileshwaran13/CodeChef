#include <iostream>
using namespace std;

int main() {
    int t, n, a, q, l, r, x, maxo;
    int C[200000][34];
    cin >> t;
    while (t--) {
        for (int i = 0; i < 34; i++) {
            C[0][i] = 0;
        }
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            for (int off = 0; off <= 31; off++)
                C[i][off] = C[i - 1][off];
            if (!a) {
                C[i][31]++;
            }
            else {
                maxo = -1;
                for (int off = 0; off < 31; off++) {
                    if ((1 << off) & a) {
                        maxo = off;
                    }
                }
                C[i][maxo]++;
            }
        }
        cin >> q;
        while (q--) {
            cin >> l >> r >> x;
            if (!x) {
                cout << r - l + 1 - C[r][31] + C[l - 1][31];
            }
            else {
                maxo = -1;
                for (int off = 0; off < 31; off++) {
                    if ((1 << off) & x) {
                        maxo = off;
                    }
                }
                int resb = C[r][31] - C[l - 1][31];
                for (int i = 0; i < 31; i++) {
                    if (i != maxo) {
                        resb += C[r][i] - C[l - 1][i];
                    }
                }
                cout << resb;
            }
            cout <<'\n';
        }
    }
    return 0;
}
