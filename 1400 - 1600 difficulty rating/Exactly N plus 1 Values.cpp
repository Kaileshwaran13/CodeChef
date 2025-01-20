#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long int i, n, x;
        cin >> n;
        cout << 1 << " ";
        x = 1;
        for (i = 0; i < n; i++)
        {
            cout << x << " ";
            x *= 2;
        }
        cout << '\n';
    }
}
