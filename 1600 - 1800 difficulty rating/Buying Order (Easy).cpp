#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--> 0) {
        int n;
        cin >> n;
        vector < bool > nums(n + 1);
        for (int i = 0; i < n; i++) {
            int c;
            cin >> c;
            nums[i + 1] = c;
        }
        int ans = 2 * n;
        if (nums[n] == 1) 
            ans -= 1;
        if (nums[1] == 0) 
            ans -= 1;
        cout << min(ans, (2 * n) - 1) << endl;
    }
}
