#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        if (n & 1) {
            int cnt = 0, odd_index = -1;
            char odd;
            unordered_map < char, int > m1;
            for (auto x: s) 
                m1[x]++;
            for (auto x: m1)
                if (x.second & 1) {
                    odd = x.first;
                    cnt++;
                }
            if (cnt > 1) 
                cout << -1 << endl;
            else if (n == 1) 
                cout << 1 << endl;
            else {
                vector < pair < char, int >> v1;
                bool is = true;
                for (int i = 0; i < n; i++) {
                    if (s[i] == odd && is) {
                        odd_index = i;
                        is = false;
                    }
                    else {
                        v1.push_back({s[i],i});
                    }
                }
                vector < int > ans(n);
                ans[n / 2] = odd_index + 1;
                sort(v1.begin(), v1.end());
                int i = 0, j = n - 1, k = 0;
                while (i < j) {
                    ans[i] = v1[k].second + 1;
                    ans[j] = v1[k + 1].second + 1;
                    k += 2;
                    i++;
                    j--;
                }
                for (auto x: ans) 
                    cout << x << " ";
                cout << '\n';
            }
        }
        else {
            int cnt = 0;
            unordered_map < char, int > m1;
            for (auto x: s) 
                m1[x]++;
            for (auto x: m1)
                if (x.second & 1) {
                    cnt++;
                }
            if (cnt >= 1) 
                cout << -1 << endl;
            else {
                vector < pair < char, int >> v1;
                for (int i = 0; i < n; i++) 
                    v1.push_back({s[i],i});
                vector < int > ans(n);
                sort(v1.begin(), v1.end());
                int i = 0, j = n - 1, k = 0;
                while (i < j) {
                    ans[i] = v1[k].second + 1;
                    ans[j] = v1[k + 1].second + 1;
                    k += 2;
                    i++;
                    j--;
                }
                for (auto x: ans) 
                    cout << x << " ";
                cout << '\n';
            }
        }
    }
}
