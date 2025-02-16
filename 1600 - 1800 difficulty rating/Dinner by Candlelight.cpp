#include <iostream>
using namespace std;

int main() {
    long t, a, y, x, ans, r, r1;
    cin >> t;
    while (t--)
    {
        cin >> a >> y >> x;
        if (a >= y)
            cout << y * x << endl;
        else
            cout << a * x + 1 << endl;
    }
    return 0;
}
