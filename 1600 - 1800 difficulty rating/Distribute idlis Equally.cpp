#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            sum += A[i];
        }
        if (sum % n != 0) 
            cout << -1 << endl;
        else {
            if (n == 1) {
                cout << 0 << endl;
                continue;
            }
            int ans = 0;
            multiset < int > m;
            for (int i = 0; i < n; i++) {
                m.insert(A[i]);
            }
            while (true) {
                int a = * m.begin();
                int b = * m.rbegin();
                m.erase(m.find(a));
                m.erase(m.find(b));
                if (a == b) break;
                ans++;
                int r = (b - a + 1) / 2;
                m.insert(a + r);
                m.insert(b - r);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
