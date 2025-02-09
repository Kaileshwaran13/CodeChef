#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0, j = 0, len = 0;
        string s = "";
        while (i < n)
        {
            j = i, len = 1;
            while (j < n - 1 && a[j] == a[j + 1] - 1)
            {
                len++;
                j++;
            }
            if (j == n - 1)
            {
                if (len == 1)
                    s += to_string(a[i]);
                else if (len == 2)
                    s += to_string(a[i]) + "," + to_string(a[j]);
                else
                    s += to_string(a[i]) + "..." + to_string(a[j]);

                break;
            }
            if (len == 1)
                s += to_string(a[i]) + ",";
            else if (len == 2)
            {
                s += to_string(a[i]) + "," + to_string(a[j]) + ",";
                i = j;
            }
            else
            {
                s += to_string(a[i]);
                s += "...";
                s += to_string(a[j]) + ",";
                i = j;
            }
            i++;
        }
        cout << s << endl;
    }
    return 0;
}
