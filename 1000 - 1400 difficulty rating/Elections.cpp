#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        vector < int > A(N), B(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        vector < int > requiredVotes;
        int currentWins = 0;

        for (int i = 0; i < N; ++i) {
            if (A[i] > B[i]) {
                currentWins++;
            } else {
                int extraVotesNeeded = B[i] - A[i] + 1;
                requiredVotes.push_back(extraVotesNeeded);
            }
        }

        sort(requiredVotes.begin(), requiredVotes.end());

        for (int i = 0; i < requiredVotes.size(); ++i) {
            if (X >= requiredVotes[i]) {
                X -= requiredVotes[i];
                currentWins++; 
            } else {
                break;
            }
        }

        if (currentWins > N / 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
