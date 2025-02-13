#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    std::cin.ignore(numeric_limits < streamsize > ::max(), '\n');
    int ans = 0;
    while (n--) {
        string s, s1;
        getline(cin, s);
        bool isD = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (isdigit(s[i])) {
                isD = true;
                s1 += s[i];
            } else if (isD) {
                break;
            }
        }
        reverse(s1.begin(), s1.end());
        int count1 = 0, count2 = 0, count3 = 0;
        bool flag = false;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != '3' && s1[i] != '5' && s1[i] != '8') {
                flag = true;
                break;
            } else {
                if (s1[i] == '3') {
                    count1++;
                } else if (s1[i] == '5') {
                    count2++;
                } else {
                    count3++;
                }
            }
        }
        if (!flag) {
            if (count3 >= count2 && count2 >= count1) {
                ans++;
            }
        }
    }
    cout << ans << "\n";

}
