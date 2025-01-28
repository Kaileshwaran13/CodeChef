#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        unordered_set < char > a;
        int s_a, s_b;
        cin >> s_a >> s_b;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; s1[i]; i++)
        {
            a.insert(s1[i]);
        }
        for (int i = 0; s2[i]; i++)
        {
            a.insert(s2[i]);
        }
        if (a.size() < 26)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
