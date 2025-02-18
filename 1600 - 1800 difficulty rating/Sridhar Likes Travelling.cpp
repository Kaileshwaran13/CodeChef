#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map < string, string > cst, nxt;
        map < string, long long > cnt;
        set < string > s;
        long long ans = 0;
        for (long long i = 1; i < n; i++) {
            string a, b, c;
            cin >> a >> b >> c;
            long long cost = stoll(c);
            ans += cost;
            nxt[a] = b;
            cst[a] = c;
            cnt[b]++;
            s.insert(a);
        }
        string curr = "";
        for (auto i: s) {
            if (!cnt[i]) {
                curr = i;
            }
        }
        n--;
        while (n--) {
            cout << curr << " " << nxt[curr] << " " << cst[curr] << "\n";
            curr = nxt[curr];
        }
        cout << ans << "$" << endl;
    }
    return 0;
}
