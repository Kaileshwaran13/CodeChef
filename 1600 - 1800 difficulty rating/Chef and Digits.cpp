#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector < long long > v(10, 0);
    string s;
    cin >> s;
    vector < long long > ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        char c = s[i - 1];
        int num = c - '0';

        long long ans_ind = 0;
        for (int j = 0; j < 10; j++) {
            long long tmp = 0;
            if (v[j] != 0) {
                tmp = num * v[j];
                tmp -= (v[j] * j);
                tmp = abs(tmp);
            }
            ans_ind += tmp;
        }
        ans[i] = ans_ind;
        v[num]++;
    }
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        cout << ans[tmp] << endl;
    }
    return 0;
}
