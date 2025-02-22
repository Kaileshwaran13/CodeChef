#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long c = 1;
        for (long long i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                c++;
            }
        }
        if (c % 3 == 2)
        {
            cout << "RAMADHIR" << endl;
        }
        else
        {
            cout << "SAHID" << endl;
        }
    }
}
