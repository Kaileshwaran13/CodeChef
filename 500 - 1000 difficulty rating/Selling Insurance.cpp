#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << ceil(100 / (0.2 * x)) << "\n";
    }
    return 0;
}
