#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        int n = str.length();
        vector < int > freq(26, 0);
        for (int i = 0; i < n; i++) {
            freq[str[i] - 'a']++;
        }
        bool f = false;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 1) {
                f = true;
                break;
            }
        }
        if (f) 
            cout << "yes" << endl;
        else 
            cout << "no" << endl;

    }

}
