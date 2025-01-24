#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector < int > freq(256, 0);
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
        }
        int maxFreq = 0;
        for (int i = 0; i < 256; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }
        int minRemovals = n - maxFreq;
        cout << minRemovals << '\n';
    }
}
