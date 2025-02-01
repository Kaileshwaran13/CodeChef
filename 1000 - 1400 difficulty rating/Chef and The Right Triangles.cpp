#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int d = 0;
    while (num--)
    {
        int a1, b1, a2, b2, a3, b3;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
        if ((a3 - a2) * (a2 - a1) + (b3 - b2) * (b2 - b1) == 0 || (a3 - a1) * (a2 - a1) + (b3 - b1) * (b2 - b1) == 0 || (a3 - a1) * (a2 - a3) + (b3 - b1) * (b2 - b3) == 0)
        {
            d++;
        }
    }
    cout << d;

}
