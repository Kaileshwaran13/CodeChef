#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string freqSeq;
        cin >> freqSeq;
        string s;
        getline(cin, s);  
        getline(cin, s);  
        vector<int> cnt(26, 0);
        for (auto c : s) {
            if (isalpha(c)) {
                char lc = tolower(c);
                cnt[lc - 'a']++;
            }
        }
        vector<pair<int, char>> arr;
        for (int i = 0; i < 26; i++) {
            arr.push_back({cnt[i], char('a' + i)});
        }
        sort(arr.begin(), arr.end(), [](pair<int, char> a, pair<int, char> b) {
            if (a.first != b.first) {
                return a.first < b.first;  
            }
            return a.second < b.second;
        });
        vector<char> mapping(26);
        for (int i = 0; i < 26; i++) {
            mapping[arr[i].second - 'a'] = freqSeq[i];
        }
        string ans;
        for (auto c : s) {
            if (isalpha(c)) {
                bool up = isupper(c);  
                char lc = tolower(c); 
                char sub = mapping[lc - 'a']; 
                if (up) sub = toupper(sub); 
                ans.push_back(sub);
            } else {
                ans.push_back(c); 
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
