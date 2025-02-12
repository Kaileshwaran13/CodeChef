#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long n, x, k, o = 0, inv = 0;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1') 
                o++;
            else 
                inv += o;
        }
        if (inv <= x && inv % k == 0) 
            cout << "1\n";
        else 
            cout << "2\n";

    }

}
