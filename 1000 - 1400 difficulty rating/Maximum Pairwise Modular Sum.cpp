#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N, M;
    cin >> T;
    while (T--) {
        cin >> N >> M;
        set < int > s;
        for (int i = 0; i < N; i++) {
            int val;
            cin >> val;
            s.insert(val);
        }
        vector < int > A;
        for (int v: s) {
            A.push_back(v);
        }
        int n = A.size();
        int ans = A[n - 1] * 2;
        int r1 = (A[n - 1] % M - A[n - 2] % M + M) % M;
        int r2 = (A[n - 2] % M - A[n - 1] % M + M) % M;
        cout << max(ans, A[n - 1] + A[n - 2] + max(r1, r2)) << endl;
    }
    return 0;
}
