#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k < n)
            cout << "0\n";
        else
            cout << k / n << endl;
    }
    return 0;
}
