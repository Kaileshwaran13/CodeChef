#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++) 
            cin >> arr[i];
        sort(arr, arr + n);
        int flag = 0;
        for (long long i = 1; i < n; i++) {
            if (gcd(arr[i], arr[0]) == 1){ 
                cout <<  n << '\n';
                flag = 1;
                break;
            }
        }
        if( flag == 1)
            continue;
        else
            cout << -1 << '\n';
    }
    return 0;
}
