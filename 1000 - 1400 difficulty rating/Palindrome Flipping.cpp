#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ze = 0, on = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') on++;
            else ze++;
        }
        if (on % 2 != 0 and ze % 2 != 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
