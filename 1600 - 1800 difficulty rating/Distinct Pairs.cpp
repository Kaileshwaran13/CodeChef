#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector < pair < long long, long long >> v1, v2;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v1.push_back({a,i});
    }
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        v2.push_back({a,i});
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for (int i = 0; i < m - 1; i++) {
        cout << v1[0].second << " " << v2[i].second << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << v1[i].second << " " << v2[m - 1].second << endl;
    }
    return 0;
}
