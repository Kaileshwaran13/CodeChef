#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a, b, c;
        bool prev = false;
        long long maxi = 0;
        while (n--) {
            cin >> a >> b >> c;
            if (a == 1) {
                prev = true;
                maxi = max(b, c);
                cout << "YES" << endl;
            }
            else {
                if (b == c) {
                    prev = false;
                    cout << "YES" << endl;
                }
                else if (prev == true && maxi > min(b, c)) {
                    maxi = max(b, c);
                    prev = true;
                    cout << "YES" << endl;
                }
                else {
                    prev = false;
                    cout << "NO" << endl;
                }
            }
        }
    }
}
