#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 1000000; i++) {
        string s;
        cin >> s;
        int ch1 = 0, ch2 = 0, maxreach1 = 5, maxreach2 = 5;
        for (int j = 0; j < 10; j++) {
            if (s[j] == '1' && j % 2 == 0) {
                ch1++;
            } else if (s[j] == '0' && j % 2 == 0) {
                maxreach1--;
            }
            if (s[j] == '1' && j % 2 == 1) {
                ch2++;
            } else if (s[j] == '0' && j % 2 == 1) {
                maxreach2--;
            }
            if (ch1 > maxreach2 || ch2 > maxreach1) {
                if (ch1 > ch2) {
                    cout << "TEAM-A " << j + 1 << endl;
                } else {
                    cout << "TEAM-B " << j + 1 << endl;
                }
                break;
            }
        }
        if (ch1 == ch2) {
            for (int j = 10; j < 20; j += 2) {
                if (s[j] == '1') ch1++;
                if (s[j + 1] == '1') ch2++;
                if (ch1 > ch2) {
                    cout << "TEAM-A " << j + 2 << endl;
                    break;
                } else if (ch2 > ch1) {
                    cout << "TEAM-B " << j + 2 << endl;
                    break;
                }

                if (j == 18 && ch1 == ch2) {
                    cout << "TIE" << endl;
                }
            }
        }
    }

    return 0;
}
