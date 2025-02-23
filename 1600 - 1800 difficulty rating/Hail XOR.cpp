#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t = 1, mod = 1e9 + 7;
    cin >> t;
    while (t--) {
        long long n, x;
        vector < long long > v[40];
        cin >> n >> x;
        long long ar[n + 5];
        for (long long i = 0; i < n; i++) 
            cin >> ar[i];
        for (long long i = n - 1; i >= 0; i--)
        {
            for (long long j = 0; j < 32; j++)
            {
                if ((ar[i] & (1 << j))) 
                    v[j].push_back(i);
            }
        }

        for (long long i = 0; i < n - 1 and x > 0; i++)
        {
            for (long long j = 31; j >= 0 and x > 0; j--)
            {
                if ((ar[i] & (1 << j)))
                {
                    v[j].pop_back();
                    x--;
                    ar[i] ^= (1 << j);
                    long long pos = n - 1;
                    if (!v[j].empty()) pos = v[j].back(), v[j].pop_back();
                    ar[pos] ^= (1 << j);
                }
            }
        }
        if (x % 2 and n == 2)
        {
            ar[0] ^= 1;
            ar[1] ^= 1;
        }
        for (long long i = 0; i < n; i++) 
            cout << ar[i] << ' ';
        cout << endl;

    }

    return 0;
}
