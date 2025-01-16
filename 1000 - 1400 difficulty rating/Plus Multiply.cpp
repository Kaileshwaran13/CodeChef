#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int count0 = 0, count2 = 0;
        for (int num: v)
        {
            if (num == 0) 
                count0++;
            if (num == 2) 
                count2++;
        }
        int res = ((count0 - 1) * (count0)) / 2 + ((count2 - 1) * (count2)) / 2;
        cout << res << endl;
    }
}
