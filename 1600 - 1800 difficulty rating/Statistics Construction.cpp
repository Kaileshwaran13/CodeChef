#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector < long long > v;
        long long start = (n + 1) / 2, end = (3 * n - 1) / 2;
        for (long long i = start; i <= end; i++) {
            cout << i << " ";
        }
        cout << endl;
    }

}
