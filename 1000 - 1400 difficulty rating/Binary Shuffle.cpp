#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long n1, n2;
        cin >> n1 >> n2;
        int c_1 = __builtin_popcountll(n1);
        int c_2 = __builtin_popcountll(n2 - 1);
        if (n1 == n2){
            cout << 0 << '\n';
            continue;
        }
        if (n2 == 1 && n1 == 0){
            cout << 1 << ''\n';
            continue;
        }
        if (n2 == 0 || n2 == 1){
            cout << -1 << '\n';
            continue;
        }
        if (c_1 == c_2)
            cout << 1 << '\n';
        else if (c_1 > c_2)
            cout << 2 << '\n';
        else
            cout << c_2 - c_1 + 1 << '\n';
    }
    return 0;
}
