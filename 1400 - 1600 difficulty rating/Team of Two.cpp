#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int K[N];
        vector < vector < int >> V {};
        for (int x = 0; x < N; ++x) {
            cin >> K[x];
            vector < int > W {};
            if (K[x] > 0) {
                copy_n(istream_iterator < int > (cin), K[x], back_inserter(W));
            }
            V.push_back(W);
        };
        bool flag = false;
        for (int p1 = 0; p1 < N - 1; ++p1) {
            for (int p2 = p1 + 1; p2 < N; ++p2) {
                if (K[p1] + K[p2] >= 5) {
                    vector < int > T {};
                    set_union(V[p1].begin(), V[p1].end(), V[p2].begin(), V[p2].end(), back_inserter(T));
                    if (accumulate(T.begin(), T.end(), 0) == 15) flag = true;
                }
            }
        }

        cout << ((flag) ? "YES" : "NO") << "\n";
    }
    return 0;
}
