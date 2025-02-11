#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a.length() == 1) {
            if (a[0] == b[0]) cout << 0 << endl;
            else cout << 1 << endl;
            continue;
        }
        int left = 0, right = 0;
        if (a[0] != b[0]) left++;
        if (a[1] != b[1]) right++;
        for (int i = 2; i < a.length(); i++) {
            if (a[i] != b[i]) {
                if (i % 2 == 0 && a[i - 2] == b[i - 2]) left++;
                else if (i % 2 == 1 && a[i - 2] == b[i - 2]) right++;
            }
        }
        cout << (left + right) << endl;
    }
    return 0;
}
