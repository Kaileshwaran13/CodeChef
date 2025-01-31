#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector < long long > a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater < int > ());
        long long count = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum < x * (i + 1))
            {
                break;
            }
            count = i + 1;
        }
        cout << count << endl;
    }
    return 0;
}
