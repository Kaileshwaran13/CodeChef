#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if ((a + b + c) > (d + e + f)) cout << "1" << endl;
        else cout << "2" << endl;
    }
    return 0;
}
