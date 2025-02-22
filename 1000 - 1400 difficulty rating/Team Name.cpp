#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt = 1;
    cin >> tt;
    for (int T = 1; T <= tt; ++T) {
        int n, m, k;
        cin >> n >> m >> k;
        vector < vector < int > > arr(n, vector < int > (m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arr[i][j];
            }
        }
        vector < vector < pair < int, int > > > nums(n - k + 1, vector < pair < int, int > > (m));
        for (int j = 0; j < m; ++j) {
            map < int, int > mp;
            for (int i = 0; i + 1 < k; ++i) {
                ++mp[arr[n - 1 - i][j]];
            }
            for (int i = n - k; i >= 0; --i) {
                ++mp[arr[i][j]];
                nums[i][j] = * mp.rbegin();
                if (--mp[arr[i + k - 1][j]] == 0) {
                    mp.erase(arr[i + k - 1][j]);
                }

            }
        }
        cout << "Case " << T << ": " << endl;
        for (int i = 0; i + k - 1 < n; ++i) {
            map < int, int > ans;
            for (int j = 0; j + 1 < k; ++j) {
                ans[nums[i][j].first] += nums[i][j].second;
            }
            for (int j = k - 1; j < m; ++j) {
                ans[nums[i][j].first] += nums[i][j].second;

                int val1 = ans.rbegin() -> first, val2 = ans.rbegin() -> second;
                cout << val1;
                if (val2 > 1) {
                    cout << "(" << val2 << ")";
                }
                cout << " ";
                ans[nums[i][j - k + 1].first] -= nums[i][j - k + 1].second;
                if (ans[nums[i][j - k + 1].first] == 0) {
                    ans.erase(nums[i][j - k + 1].first);
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
