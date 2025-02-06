#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int limit = str.size();
        for (int i = 1; i < limit; i++)
        {
            int count = 0, ans = 0;
            int j = i;
            while (j)
            {
                count++;
                if (j & 1)
                {
                    ans += pow(2, n - count);
                }
                j = j >> 1;
            }
            if (ans > i)
            {
                swap(str[i], str[ans]);
            }
        }
        cout << str << endl;
    }

}
