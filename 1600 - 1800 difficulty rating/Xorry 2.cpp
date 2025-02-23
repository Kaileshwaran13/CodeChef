#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = log2(n), z = pow(2, k), ans = 0, w = 0;
        if (z == n) 
            cout << 1 << endl;
        else {
            while (n) {
                if (n % 2 == 0) 
                    w++;
                else {
                    if (n != 1) 
                        ans += w;
                    w = 0;
                }
                n >>= 1;
            }
            long long int a = pow(2, ans);
            cout << a << endl;
        }
    }

}
