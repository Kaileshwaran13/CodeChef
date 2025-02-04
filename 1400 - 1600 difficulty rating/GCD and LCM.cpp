#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int tem = gcd(n, m);
        int tem1 = min(n, m);
        if (k <= 1) 
            cout << tem + tem1 << endl;
        else 
            cout << tem * 2 << endl;
    }
    return 0;
}
