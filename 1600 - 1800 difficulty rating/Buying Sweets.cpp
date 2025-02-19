#include <bits/stdc++.h>
using namespace std;

bool compr(const pair < int, int > & a,
    const pair < int, int > & b) {
    return (a.first - a.second) < (b.first - b.second);
}

int main() {
    int t;
    cin >> t;
    int n, r;
    while (t--) {
        cin >> n >> r;
        vector < pair < int, int > > dif(n);
        for (int i = 0; i < n; i++)
            cin >> dif[i].first;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            dif[i].second = temp;
        }
        sort(dif.begin(), dif.end(), compr);
        int cnt = 0, pnt = 0;
        while (r > 0 && pnt < n) {
            int cost = dif[pnt].first - dif[pnt].second;
            if (r >= dif[pnt].first) {
                int buy = (r - dif[pnt].first) / cost + 1;
                cnt = cnt + buy;
                r -= buy * cost;
            }
            pnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
