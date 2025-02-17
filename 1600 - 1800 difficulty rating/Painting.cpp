#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, h;
    cin >> n >> m >> h;
    vector < pair < long long, long long >> a;
    int ini_h = h;
    long long check_sum = 0;
    while (ini_h--) {
        long long t, c;
        cin >> t >> c;
        check_sum += t;
        a.push_back({c,t});
    }
    if (check_sum < n * m) {
        cout << "Impossible" << "\n";
        return 0;
    }
    sort(a.begin(), a.end());
    long long cost = 0, area = n * m;
    for (int i = 0; i < h; i++) {
        cost += min(area, a[i].second) * a[i].first;
        area -= min(area, a[i].second);
        if (area == 0) 
            break;
    }
    cout << cost << "\n";
}
