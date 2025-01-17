#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        string name;
        getline(cin >> ws, name);
        int l = name.length();
        int w = 0, k[2];
        for (int i = 0; i < l; i++) {
            if (name[i] == ' ') {
                w++;
                k[w - 1] = i;
            }
        }
        if (w == 0) {
            for (int i = 0; i < l; i++) {
                if (i == 0) {
                    cout << char(toupper(name[i]));
                }
                else {
                    cout << char(tolower(name[i]));
                }
            }
            cout << '\n';
        }
        if (w == 1) {
            cout << char(toupper(name[0])) << ". ";
            for (int i = k[0] + 1; i < l; i++) {
                if (i == k[0] + 1) {
                    cout << char(toupper(name[i]));
                }
                else {
                    cout << char(tolower(name[i]));
                }
            }
            cout << '\n';
        }
        if (w == 2) {
            cout << char(toupper(name[0])) << ". " << char(toupper(name[k[0] + 1])) << ". ";
            for (int i = k[1] + 1; i < l; i++) {
                if (i == k[1] + 1) {
                    cout << char(toupper(name[i]));
                }
                else {
                    cout << char(tolower(name[i]));
                }
            }
            cout << '\n';
        }
    }

}
