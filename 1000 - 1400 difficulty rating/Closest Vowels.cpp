#include <bits/stdc++.h>
using namespace std;

int main() {
    const int a = 1e9 + 7;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long int count = 1;
        for (auto i: s) {
            if (i == 'c' || i == 'g' || i == 'l' || i == 'r') {
                count = (count * 2) % a;
            }
        }
        cout << count << '\n';
    }
}
