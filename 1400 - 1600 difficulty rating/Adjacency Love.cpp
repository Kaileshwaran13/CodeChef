#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v;
        int odd = 0;
        int even = 0;
        vector < int > o1, e1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                even++;
                e1.push_back(x);
            }
            else {
                odd++;
                o1.push_back(x);
            }
            v.push_back(x);
        }
        if (odd == 0 or odd == 1 or(odd % 2 == 1 and even == 0)) {
            cout << -1 << endl;
        }
        else {
            cout << o1[0] << " ";
            int start_index = 0;
            if (odd % 2 == 1) {
                cout << e1[0] << " ";
                start_index = 1;
            }
            for (int i = 1; i < o1.size(); i++) {
                cout << o1[i] << " ";
            }
            for (int i = start_index; i < e1.size(); i++) {
                cout << e1[i] << " ";
            }
            cout << endl;
        }
    }
}
