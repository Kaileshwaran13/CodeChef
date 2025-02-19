#include <bits/stdc++.h>
using namespace std;

int main() {
    int N = 1005;
    vector < vector < int > > dp(N, vector < int > (N));
    vector < int > dx = {-1,-2,-1,-2,0,0};
    vector < int > dy = {0,0,-1,-2,-1,-2};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 && j == 0) 
                continue;
            set < int > ts;
            for (int t = 0; t < 6; t++) {
                int x = i + dx[t];
                int y = j + dy[t];
                if (x >= 0 && y >= 0) 
                    ts.insert(dp[x][y]);
            }
            int sg = 0;
            while (ts.count(sg)) 
                sg++;
            dp[i][j] = sg;
        }
    }
    int tc;
    cin >> tc;
    while (tc--) {
        int C;
        cin >> C;
        int rlt = 0;
        for (int i = 0; i < C; i++) {
            int n, m;
            cin >> n >> m;
            rlt = rlt ^ dp[n - 1][m - 1];
        }
        if (rlt > 0)
            cout << "MasterChef" << endl;
        else
            cout << "Football" << endl;
    }
    return 0;
}
