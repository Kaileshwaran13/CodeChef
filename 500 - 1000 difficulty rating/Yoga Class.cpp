#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int ans1 = (n / 2) * y + (n % 2) * x;
        int ans2 = n * x;
        cout << max(ans1, ans2) << endl;
    }

}
