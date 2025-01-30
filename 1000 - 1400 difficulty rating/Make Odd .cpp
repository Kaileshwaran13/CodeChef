#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int ans = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '1') 
                ans += 1;
            else if (a[i] == '1' || b[i] == '1') {
                c++;
            }
        }
        if (ans % 2 == 1) 
            cout << "YES\n";
        else {
            if (c >= 1) 
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }

}
