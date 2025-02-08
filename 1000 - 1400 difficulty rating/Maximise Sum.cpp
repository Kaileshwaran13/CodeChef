#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > nums(n);
        int cntneg = 0, cntzer = 0;
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            if (nums[i] < 0)
                cntneg++;
            else if (nums[i] == 0)
                cntzer++;
        }
        long long sum = 0;
        if ((cntneg % 2 == 0) || (cntzer > 0)) {
            for (int i = 0; i < n; i++)
                sum += abs(nums[i]);
            cout << sum << endl;
        }
        else {
            for (int i = 0; i < n; i++)
                sum += abs(nums[i]);
            int mini = INT_MAX;
            for (int i = 0; i < n; i++) {
                mini = min(mini, abs(nums[i]));
            }
            sum -= (2 * mini);
            cout << sum << endl;
        }
    }
}
