#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int num;
        cin >> num;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < num; i++) {
            if (s[i] == '0') {
                break;
            }
            count++;
        }
        cout << count << endl;
    }
}
