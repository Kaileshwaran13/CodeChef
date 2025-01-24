#include <iostream>
using namespace std;

int main() {
    int t, a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        if (a + b + c <= d)
            cout << "1\n";
        else if ((a + b) <= d || (a + c) <= d || (b + c) <= d)
            cout << "2\n";
        else
            cout << "3\n";
    }
    return 0;
}
