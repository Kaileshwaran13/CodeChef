#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long d = abs(b - a);
        int c = 0;
        for (int i = 1; i <= sqrt(d); i++)
            if (d % i == 0 && d == (i * i))
                c++;
            else if (d % i == 0 && d != (i * i))
            c += 2;
        cout << c << "\n";
    }
}
