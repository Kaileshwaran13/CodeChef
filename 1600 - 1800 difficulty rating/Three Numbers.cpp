#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if ((a[1] - a[0]) % 2 == 0 && (a[2] - a[1]) % 2 == 0)
        {
            int temp = (a[1] - a[0]) / 2 + (a[2] - a[0]) / 2;
            cout << temp << "\n";
        }
        else
            cout << "-1" << "\n";
    }
    return 0;
}
