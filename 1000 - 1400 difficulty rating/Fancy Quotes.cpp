#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        int res = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'n' && s[i + 1] == 'o' && s[i + 2] == 't')
            {
                if ((i == 0 || s[i - 1] == ' ') && (s[i + 3] == ' ' || i == n - 3))
                    res = 1;
            }
        }
        if (res == 1) {
            cout << "Real Fancy" << '\n';
        }
        else {
            cout << "regularly fancy" << '\n';
        }
    }
}
