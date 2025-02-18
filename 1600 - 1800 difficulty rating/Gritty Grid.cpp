#include<bits/stdc++.h>
using namespace std;

int main() {

    long long t;
    cin >> t;
    while (t--) {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;
        long long d = (n - 1) + (m - 1);
        bool is = false;
        if (d == x)
            is = 1;
        else if (x & 1 && !(y & 1))
            is = 1;
        else if (y & 1 && !(x & 1))
            is = 1;
        else if ((d & 1) && (x & 1) && (y & 1))
            is = 1;
        else if (!(d & 1) && !(x & 1) && !(y & 1))
            is = 1;
        is ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
