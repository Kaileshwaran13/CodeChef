#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int par2 = (x + y) % 2;
        if (par2) 
            cout << "1\n";
        else 
            cout << "0\n";
    }
    return 0;
}
