#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int cH = 0;
        vector < char > toss(n);
        for (int i = 0; i < n; i++) {
            cin >> toss[i];
        }
        for (int i = n - 1; i >= n - k; i--) {
            if (toss[i] == 'H') {
                for (int j = 0; j < i; j++) {
                    if (toss[j] == 'H') toss[j] = 'T';
                    else toss[j] = 'H';
                }
            }
        }
        for (int i = 0; i < n - k; i++) {
            if (toss[i] == 'H') cH++;
        }
        cout << cH << endl;

    }

}
