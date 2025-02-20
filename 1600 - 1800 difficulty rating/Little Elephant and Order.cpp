#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int n = a.size(), less_than_7_sec = 0, less_than_7_first = 0,
            less_than_3_first = 0, less_than_3_sec = 0;
        int first[10] = {}, sec[10] = {};
        for (long long i = 0; i < n; i++) {
            first[a[i] - '0']++;
            sec[b[i] - '0']++;
        }
        for (long long i = 0; i < 7; i++) {
            if (i == 4)
                continue;
            else if (i <= 3) {
                less_than_3_sec += sec[i];
                less_than_3_first += first[i];
            }
            else {
                less_than_7_sec += sec[i];
                less_than_7_first += first[i];
            }
        }
        int first_7 = first[7], sec_7 = sec[7];
        first_7 -= min(first_7, less_than_7_sec);
        if (first_7 > 0) {
            if (first_7 > less_than_3_sec) {
                first_7 -= less_than_3_sec;
                less_than_3_sec = 0;
            }
            else {
                less_than_3_sec -= first_7;
                first_7 = 0;
            }
        }

        if (first_7 > 0) {
            if (first_7 > sec[4]) {
                first_7 -= sec[4];
                sec[4] = 0;
            } else {
                sec[4] -= first_7;
                first_7 = 0;
            }
        }
        sec_7 -= min(sec_7, less_than_7_first);
        if (sec_7 > 0) {
            if (sec_7 > less_than_3_first) {

                sec_7 -= less_than_3_first;
                less_than_3_first = 0;
            }
            else {
                less_than_3_first -= sec_7;
                sec_7 = 0;
            }
        }
        if (sec_7 > 0) {
            if (sec_7 > first[4]) {
                sec_7 -= first[4];
                first[4] = 0;
            } else {
                first[4] -= sec_7;
                sec_7 = 0;
            }
        }
        int ans_7 = first[7] - first_7 + sec[7] - sec_7 + min(sec_7, first_7);

        int first_4 = first[4], sec_4 = sec[4];
        first_4 -= min(first_4, less_than_3_sec);
        sec_4 -= min(sec_4, less_than_3_first);
        int ans_4 = first[4] - first_4 + sec[4] - sec_4 + min(sec_4, first_4);

        while (ans_7--) cout << "7";
        while (ans_4--) cout << "4";
        cout << "\n";
    }
    return 0;
}
