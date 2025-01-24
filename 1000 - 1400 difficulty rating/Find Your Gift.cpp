#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x = 0;
        int y = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (i != 0) {
                if (s[i] == 'R') {
                    if (s[i - 1] != 'R' && s[i - 1] != 'L') {
                        x += 1;
                    }
                } else if (s[i] == 'L') {
                    if (s[i - 1] != 'L' && s[i - 1] != 'R') {
                        x -= 1;
                    }
                } else if (s[i] == 'U') {
                    if (s[i - 1] != 'U' && s[i - 1] != 'D') {
                        y += 1;
                    }
                } else if (s[i] == 'D') {
                    if (s[i - 1] != 'D' && s[i - 1] != 'U') {
                        y -= 1;
                    }
                }
            } else {
                if (s[i] == 'R') {
                    x += 1;
                } else if (s[i] == 'L') {
                    x -= 1;
                } else if (s[i] == 'U') {
                    y += 1;
                } else if (s[i] == 'D') {
                    y -= 1;
                }
            }

        }
        cout << x << " " << y << '\n';

    }
}
