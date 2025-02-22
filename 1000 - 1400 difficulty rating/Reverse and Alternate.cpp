#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeros = 0, ones = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '0')
                zeros++;
            else
                ones++;
        }
        if (abs(zeros - ones) >= 2)
            cout << "NO" << endl;
        else{
            int zz = 0, oo = 0;
            for (int i = 0; i < s.length() - 1; i++){
                if (s[i] == s[i + 1] && s[i] == '0')
                    zz++;
                if (s[i] == s[i + 1] && s[i] == '1')
                    oo++;
                if (oo > 1 || zz > 1)
                    break;
            }
            if (oo > 1 || zz > 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}
