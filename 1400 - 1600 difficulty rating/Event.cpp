#include <bits/stdc++.h>
using namespace std;

int day(string s) {
    if (s == "sunday") return 1;
    if (s == "monday") return 2;
    if (s == "tuesday") return 3;
    if (s == "wednesday") return 4;
    if (s == "thursday") return 5;
    if (s == "friday") return 6;
    if (s == "saturday") return 7;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, e;
        int l, r;
        cin >> s >> e >> l >> r;
        int dif = (day(e) - day(s) + 8) % 7;
        int dem = 0;
        for (int i = l; i <= r; i++)
            if (i % 7 == dif) dem++;
        if (!dem) cout << "impossible\n";
        else if (dem > 1) cout << "many\n";
        else {
            for (int i = l; i <= r; i++) {
                if (i % 7 == dif) {
                    cout << i << "\n";
                    break;
                }
            }
        }
    }
}
