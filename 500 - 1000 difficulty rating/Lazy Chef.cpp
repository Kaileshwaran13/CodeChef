#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x, m, d;
        cin >> x >> m >> d;
        int n = x * m;
        int b = x + d;
        if (n <= b)
            cout << n << endl;
        else if (n > d)
            cout << b << endl;
    }
    return 0;
}
