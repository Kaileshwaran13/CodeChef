#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;
        vector < long long > P(N);
        long long b = 0;
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
            if (__builtin_popcountll((long long)(i + 1)) != __builtin_popcountll(P[i])) {
                b++;
            }
        }
        if (b) 
            cout << "No" << endl;
        else 
            cout << "Yes" << endl;


    }

    return 0;
}
