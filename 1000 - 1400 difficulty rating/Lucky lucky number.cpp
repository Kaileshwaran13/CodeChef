#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int j;
        for (j = n; j >= 0; j -= 4)
        {
            if (j % 7 == 0)
            {
                cout << j << '\n';
                break;
            }
        }
        if (j < 0)
        {
            cout << "-1" << '\n';
        }
    }
}
