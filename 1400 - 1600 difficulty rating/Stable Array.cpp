#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector < int > A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        int largest = A[N - 1];
        int seconds = 0, k = 0;
        for (int i = N - 2; i >= 0; i--) {
            if (A[i] < largest) {
                seconds++;
                k = max(k, seconds);
            }
            else if (A[i] > largest) {
                largest = A[i];
                seconds = 0;
            }
            else if (A[i] == largest && i != 0) {
                seconds = 0;
            }
        }
        cout << k << endl;
    }
    return 0;
}
