#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int ar[n];
        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == ar[i] % k)
                s = s + k - ar[i] % k;
            else
                s = s + min(k - (ar[i] % k), ar[i] % k);
        }

        cout << s << endl;
    }
}
