#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;

        int ra = ((a % 10) * 10) + (a / 10);
        int rb = ((b % 10) * 10) + (b / 10);

        if (a > b || a > rb || ra > b || ra > rb) cout << "Yes\n";
        else cout << "No\n";

    }

}
