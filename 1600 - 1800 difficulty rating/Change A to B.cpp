#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long count = 0;
        if (k > b) {
            count = b - a;
            a = b;
        }
        while (a != b) {
            if (b % k == 0 && b / k >= a) {
                count++;
                b /= k;
            }
            else if (b % k == 0) {
                count += b - a;
                break;
            }
            else {
                count += b % k;
                b = b - b % k;
            }
        }
        cout << count << endl;
    }

}
