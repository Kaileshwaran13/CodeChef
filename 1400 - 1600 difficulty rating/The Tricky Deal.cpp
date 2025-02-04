#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        long long d1 = 0, sum = 0, d2 = 0, i = 0;
        while (true) {
            if (a > pow(2, i)) {
                d2++;
            }
            else {
                break;
            }
            ++i;
        }
        i = 0;
        while (true) {
            sum += pow(2, i);
            if (a * (i + 1) > sum) {
                d1++;
            }
            else {
                break;
            }
            ++i;
        }
        cout << d1 << " " << d2 << endl;
    }
    return 0;
}
