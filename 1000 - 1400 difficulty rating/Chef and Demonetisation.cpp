#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int s, n, count = 0;
        cin >> s >> n;
        if (s % 2) 
            count++, s--;
        while (s)
        {
            count += (s / n);
            if (s < n)
            {
                count++;
                break;
            }
            s = s % n;
        }
        cout << count << endl;
    }
}
