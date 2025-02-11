#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int k, n, x, y;
        cin >> x >> y >> k >> n;
        long long int temp = abs(x - y);
        if (temp % k != 0) 
            cout << "No\n";
        else if ((temp / k) % 2 == 1) 
            cout << "No\n";
        else 
            cout << "Yes\n";
    }
    return 0;
}
