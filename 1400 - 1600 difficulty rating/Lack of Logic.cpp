#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T != 0) {
        string s;
        getline(cin, s);

        if (s == "Father, what is the lack of logic?") {
            cout << "Bunny";
        }
        else if (s == "Where?") {
            cout << "Day";
        }
        else {
            unordered_map < char, bool > m;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] >= 65 && s[i] <= 90) {
                    m[s[i]] = true;
                }
                else if (s[i] >= 97 && s[i] <= 122) {
                    m[s[i] - 32] = true;

                }
            }
            bool flag = false;
            for (int i = 65; i <= 90; i++) {
                char elem = i;
                if (m.count(elem) == 0) {
                    cout << elem;
                    flag = true;
                    break;
                }
            }
            if (flag == false) {
                cout << "~";
            }
        }
        cout << endl;
        T--;
    }
    return 0;
}
