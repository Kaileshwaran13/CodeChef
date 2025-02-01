#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int b = x * y;
        int sum1 = 0, sum2 = 0, Sum = 0;
        vector < int > ans;
        int a[x][y];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                cin >> a[i][j];
                Sum += a[i][j];
                ans.push_back(a[i][j]);
            }
        }
        sort(begin(ans), end(ans));
        for (int i = b - 1; i >= 0; i = i - 2) {
            sum1 += ans[i];
        }
        sum2 = Sum - sum1;
        if (sum1 > sum2) {
            cout << "Cyborg" << endl;
        }
        else if (sum2 > sum1) {
            cout << "Geno" << endl;
        }
        else {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
