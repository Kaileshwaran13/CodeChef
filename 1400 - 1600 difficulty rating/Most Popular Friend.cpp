#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m_popu = INT_MIN;
        cin >> n;
        vector < int > size;
        vector < vector < int >> g(n, vector < int > (n, 101));
        for (int i = 0; i < n; i++)
            g[i][i] = 0;

        string s;
        getline(cin, s);
        for (int i = 0; i < n; i++) {
            getline(cin, s);
            int val = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == ' ' || j == s.length() - 1) {
                    if (j == s.length() - 1)
                        val = (val * 10) + (s[j] - '0');

                    g[i][val - 1] = 1;
                    val = 0;
                }
                else
                    val = (val * 10) + (s[j] - '0');
            }
        }
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
            }
        }
        int ans;
        double avg = 1000000.0;
        for (int i = 0; i < n; i++) {
            double sum = 0;
            for (auto & x: g[i])
                sum += x;
            double z = (double) sum / n;
            if (z < avg) {
                avg = z;
                ans = i;
            }
        }
        cout << ans + 1 << " " << fixed << setprecision(6) << avg << endl;
    }
    return 0;
}
