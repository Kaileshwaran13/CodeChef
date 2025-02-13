#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        map < int, string > mn;
        map < int, int > mc;
        for (int i = 0; i < n; i++) {
            string S;
            int x;
            cin >> S >> x;
            mn[x] = S;
            mc[x]++;
        }
        for (auto i: mc) {
            if (i.second == 1) {
                ans = i.first;
                break;
            }
        }
        if (ans == 0) 
            cout << "Nobody wins.\n";
        else 
            cout << mn[ans] << endl;
    }
    return 0;
}
