#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector < int > tasks(n), completed(n);
        for (auto & i: tasks)
            cin >> i;
        for (auto & i: completed)
            cin >> i;
        vector < int > diff;
        for (int i = 0; i < n; i++)
            diff.push_back(tasks[i] - completed[i]);
        sort(diff.begin(), diff.end(), greater < int > ());
        vector < int > buttons(m + k);
        for (auto & i: buttons)
            cin >> i;
        sort(buttons.begin(), buttons.end(), greater < int > ());
        int i = 0, j = 0;
        while (i < n && j < (m + k)) {
            if (diff[i] < buttons[j]) j++;
            else {
                diff[i] -= buttons[j];
                i++;
                j++;
            }
        }
        int rem = accumulate(diff.begin(), diff.end(), 0ll);
        cout << rem << endl;

    }

    return 0;
}
