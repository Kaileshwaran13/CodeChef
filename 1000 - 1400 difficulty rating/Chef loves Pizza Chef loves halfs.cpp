#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        long long int x;
        cin >> x;
        if (x == 0 || x == 2 || x == 4) cout << 0 << endl;
        else {
            long long int temp = 2;
            while (temp * 2 <= x) {
                temp *= 2;
            }
            cout << 2 * (x - temp) << endl;
        }


    }

}
