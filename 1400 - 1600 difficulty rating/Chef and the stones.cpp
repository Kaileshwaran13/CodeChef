#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n1, n2, m, sum, minn, last;
        cin >> n1 >> n2 >> m;
        sum = (m * (m + 1)) / 2;
        minn = min(n1, n2);
        last = min(minn, sum);
        cout << (n1 - last) + (n2 - last) << endl;
    }
    return 0;
}
