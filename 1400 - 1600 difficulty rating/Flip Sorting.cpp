#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n, cnt;
    bool flip;
    char temp;
    string bin_str;
    while (t--) {
        cin >> n;
        cin >> bin_str;
        flip = false;
        cnt = 0;
        vector < int > mp;
        for (int j = n - 1; j >= 0; j--) {
            if (flip) {
                temp = (bin_str[j] == '1') ? '0' : '1';
            } else {
                temp = bin_str[j];
            }
            if (temp == '0') {
                cnt += 1;
                mp.push_back(j + 1);
                flip = flip ? false : true;
            }
        }
        cout << cnt << endl;
        for (int i: mp) {
            cout << 1 << " " << i << endl;
        }
    }
    return 0;
}
