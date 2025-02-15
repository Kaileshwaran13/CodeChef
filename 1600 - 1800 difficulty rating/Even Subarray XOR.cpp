#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        if ((n & 1) != 0) {
            int x = 2;
            for (int i = 1; i <= n - 1; i++) {
                cout << x << " ";
                x++;
            }
            cout << 300000 << "\n";
            for (int i = 1; i <= n - 1; i++) {
                cout << x << " ";
                x++;
            }
            cout << 299999 << "\n";
        } else {
            int x = 2;
            for (int i = 1; i <= n; i++) {
                cout << x << " ";
                x++;
            }
            cout << "\n";
            for (int i = 1; i <= n; i++) {
                cout << x << " ";
                x++;
            }
            cout << "\n";
        }
    }
}
