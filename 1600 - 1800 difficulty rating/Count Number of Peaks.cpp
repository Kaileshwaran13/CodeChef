#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 2)
            cout << 0 << endl;
        else
        {
            int suh = n - 2;
            cout << suh * 10 * pow(3, n - 3) << endl;
        }
    }

}
