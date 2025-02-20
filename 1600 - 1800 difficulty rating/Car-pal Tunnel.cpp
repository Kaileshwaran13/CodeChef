#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        long long C, D, S, mini = 0;
        cin >> C >> D >> S;
                for (int i = 0; i < N; ++i) {
            mini = max(mini, A[i]);
        }
        double final_delay = ((C - 1) * mini);
        cout << fixed << setprecision(9) << final_delay << endl;
    }
    return 0;
}
