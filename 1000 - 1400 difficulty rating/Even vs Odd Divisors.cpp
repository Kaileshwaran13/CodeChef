#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int divisors[100]; 
        int count = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisors[count++] = i;
            }
        }
        int fn = 0, gn = 0;
        for (int i = 0; i < count; i++) {
            if (divisors[i] % 2 == 0) {
                fn++;
            } else {
                gn++;
            }
        }
        if (fn > gn) {
            cout << "1" << endl;
        } else if (fn == gn) {
            cout << "0" << endl;
        } else {
            cout << "-1" << endl;
        }
    }

}
