#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt, b, m, r, e;
    string str;
    cin >> tt;
    while (tt--) {
        for(int i = 0; i < 4; i++){
            cin >> str;
            if (str == "Barcelona") {
                cin >> b;
            }
            else if (str == "RealMadrid") {
                cin >> r;
            }
            else if (str == "Eibar") {
                cin >> e;
            }
            else {
                cin >> m;
            }
        }
        if (b > e && r < m) {
            cout << "Barcelona" << '\n';
        }
        else {
            cout << "RealMadrid" << '\n';
        }
    }

}
