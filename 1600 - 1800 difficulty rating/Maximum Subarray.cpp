#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a;
        int sumb = 0, num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            a.push_back(num);
        }
        int m;
        cin >> m;
        vector < int > b;
        for (int i = 0; i < m; i++) {
            cin >> num;
            b.push_back(num);
            if (b[i] > 0)
                sumb += b[i];
        }
        int sum = 0;
        int sumStart = INT_MIN, sumEnd = INT_MIN;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (sumStart < sum)
                sumStart = sum;
        }
        sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            sum += a[i];
            if (sumEnd < sum)
                sumEnd = sum;
        }
        int ans = 0;
        if (sumStart > sumEnd)
            ans = sumStart + sumb;
        else
            ans = sumEnd + sumb;
        cout << ans << endl;
    }
    return 0;
}
