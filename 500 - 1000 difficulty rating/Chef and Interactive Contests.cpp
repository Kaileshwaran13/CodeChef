#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int a, b, i, n, t;
    cin >> t >> n;
    while (t--)
    {
        cin >> a;
        if (a < n)
            cout << "Bad boi" << endl;
        else
            cout << "Good boi" << endl;
    }
    return 0;
}
