#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int h, v;
        cin >> h >> v;
        int c = 0;
        if (h < v)
        {
            c = 2 * (h + 1) + 3 * (v - h - 1) + 1;
            cout << c << "\n";
            for (int i = 0; i <= h; i++)
            {
                cout << "1" << "0";
            }
            for (int i = 0; i < v - h - 1; i++)
            {
                cout << "1" << "1" << "0";
            }
            cout << "1";
        }
        else if (h > v)
        {
            c = 2 * (v + 1) + 3 * (h - v - 1) + 1;
            cout << c << "\n";
            for (int i = 0; i <= v; i++)
            {
                cout << "0" << "1";
            }
            for (int i = 0; i < h - v - 1; i++)
            {
                cout << "0" << "0" << "1";
            }
            cout << "0";
        }
        else
        {
            cout << 2 * (h + 1) << "\n";
            for (int i = 0; i <= h; i++)
                cout << "0" << "1";
        }
        cout << "\n";
    }
    return 0;
}
