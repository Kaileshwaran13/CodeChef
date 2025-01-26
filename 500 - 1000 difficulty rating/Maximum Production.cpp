#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int e = b * 7;
        int f = (c * a) + (d * (7 - a));
        int g = max({e,f});
        cout << g << endl;
    }
    return 0;
}
