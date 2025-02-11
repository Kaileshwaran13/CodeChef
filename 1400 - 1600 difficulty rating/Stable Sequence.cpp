#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], flag = 0, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= mx)
            {
                mx = a[i];
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "0" << endl;
        }
        else if (flag == 1 && mx == a[n - 1])
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}
