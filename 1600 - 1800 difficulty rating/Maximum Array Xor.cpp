#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int tem = pow(2, n);
        long long int ans = 0;
        if (k == 0)
            cout << 0 << endl;
        else if (k < tem / 2)
        {
            long long int tem1 = tem - 1;
            ans = tem1 * k;

            cout << ans * 2 << endl;
        }
        else
        {
            ans = (tem - 1) * (tem / 2);
            cout << ans * 2 << endl;
        }
    }
    return 0;
}
