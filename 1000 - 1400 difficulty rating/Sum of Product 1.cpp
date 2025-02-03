#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        int prev = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                for (int j = prev + 1; j < i; j++)
                {
                    v[j] = i;
                }
                prev = i;
            }
        }
        for (int j = prev + 1; j < n; j++)
        {
            v[j] = n;
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0) sum += v[i] - i;

        }
        cout << sum << endl;
        t--;
    }
}
