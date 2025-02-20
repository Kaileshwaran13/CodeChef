#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ans = LLONG_MAX;
        while (n--) {
            string s;
            cin >> s;
            long long aCount = 0,bCount = 0;
            for (long long i = 0; i < s.size(); i++) {
                if (s[i] == 'a') 
                    aCount++;
                else 
                    bCount++;
            }
            ans = min(ans, min(aCount, bCount));
        }
        cout << ans << endl;
    }
}
