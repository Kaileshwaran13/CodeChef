#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        string str;
        cin >> str;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '1' && str[i + 1] == '0')
            {
                count++;
            }
        }
        cout << count << '\n';
    }
}
