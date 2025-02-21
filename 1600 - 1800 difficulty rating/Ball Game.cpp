#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ck(pair < int, int > a, pair < int, int > b) {
    return a.first * b.second > b.first * a.second;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;   
    while(t--) {
        int n;
        cin >> n;
        vpi l(n);
        int i = 0;
        do {
            cin >> l[i].first;
            i++;
        } while (i < n);
        i = 0;
        do {
            cin >> l[i].second;
            i++;
        } while (i < n);
        sort(l.begin(), l.end());
        stack < int > s;
        i = 0;
        do {
            while (!s.empty() && ck(l[s.top()], l[i])) {
                s.pop();
            }
            s.push(i);
            i++;
        } while (i < n);
        cout << s.size() << endl;
    } 
    return 0;
}
