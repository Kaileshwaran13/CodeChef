#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << ((n - 1) * (n)) / 2 << endl;
    }
    return 0;
}
