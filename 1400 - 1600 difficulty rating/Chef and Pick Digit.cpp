#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        unordered_map < int, int > ump;
        for (int i = 0; i < str.size(); i++) {

            int num = str[i] - '0';
            ump[num]++;
        }
        for (int i = 65; i <= 90; i++) {
            if (i == 66 || i == 77 || i == 88) {
                if (ump[i % 10] >= 2) {
                    cout << char(i);
                }
            } else {
                int val = i;
                bool chk = true;
                while (val > 0) {
                    if (ump[val % 10] == 0) {
                        chk = false;
                        break;
                    }
                    val /= 10;
                }
                if (chk) {
                    cout << char(i);
                }
            }
        }
        cout << endl;
    }
    return 0;
}
