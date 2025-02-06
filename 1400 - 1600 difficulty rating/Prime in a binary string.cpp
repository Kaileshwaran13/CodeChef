#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string prime;
        cin >> prime;
        int flag = 0;

        if (prime.length() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < prime.length() - 1; i++)
            {
                if ((prime[i] == '1' && prime[i + 1] == '0') || (prime[i] == '1' && prime[i + 1] == '1'))
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }

        }
    }
    return 0;
}
