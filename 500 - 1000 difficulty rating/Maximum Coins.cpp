#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int total_wins = 0;
        for (int i = N; i > N - X; --i) {
            total_wins += pow(2, i);
        }

        int total_losses = 0;
        for (int i = 1; i <= N - X; ++i) {
            total_losses += pow(2, i);
        }

        int result = total_wins - total_losses;
        cout << result << endl;
    }

    return 0;
}
