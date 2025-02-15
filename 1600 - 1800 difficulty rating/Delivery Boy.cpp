#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dis[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> dis[i][j];
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                dis[i][j] = min(dis[i][k] + dis[k][j], dis[i][j]);
            }
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int s, g, d;
        cin >> s >> g >> d;
        int dist = dis[s][d];
        int boy = dis[s][g] + dis[g][d];
        cout << boy << " " << boy - dist << endl;
    }
    return 0;
}
