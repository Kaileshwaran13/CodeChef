#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int c, r, countc = 0, countr = 0;
        cin >> c >> r;
        countc = c / 9;
        if (c % 9 != 0)
            countc++;
        countr = r / 9;
        if (r % 9 != 0)
            countr++;

        if (countr > countc)
            cout << "0 " << countc << endl;
        else
            cout << "1 " << countr << endl;
    }
    return 0;
}
