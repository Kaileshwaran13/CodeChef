#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (it _ = 0; _ < t; _ += 1)
    {

        int k;
        cin >> k;
        cout << "O";
        k--;
        for (int i = 0; i < 7; i++)
        {
            if (k) {
                cout << ".";
                k--;
            }
            else cout << "X";
        }
        cout << "\n";
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (k) {
                    cout << ".";
                    k--;
                }
                else cout << "X";
            }
            cout << "\n";
        }

    }
    return 0;
}
