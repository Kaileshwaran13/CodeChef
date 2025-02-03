#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        long long numerator = 103993;
        long long denominator = 33102;
        if (k != 0) cout << numerator / denominator << ".";
        else {
            cout << numerator / denominator << endl;
            continue;
        }
        numerator = numerator % denominator;
        for (int i = 0; i < k; ++i) {
            numerator *= 10;
            cout << numerator / denominator;
            numerator = numerator % denominator;
        }
        cout << endl;
    }
    return 0;
}
