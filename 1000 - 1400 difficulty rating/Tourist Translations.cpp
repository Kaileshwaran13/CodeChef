#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    string m;
    cin >> m; 
    while (t--) {
        string s;
        cin >> s; 
        int n = s.size();
        string str;
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                // Map lowercase letters using m
                int pos = s[i] - 'a';
                str += m[pos];
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                int pos = s[i] - 'A';
                str += toupper(m[pos]);
            } else if (s[i] == '_') {
                str += ' ';
            } else {
                str += s[i];
            }
        }
        cout << str << '\n';  
    }
}
