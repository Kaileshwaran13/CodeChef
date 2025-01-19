#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        cout << r / 3 - (l - 1) / 3 << endl;
    }
}
