#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, ans = 0;
        cin >> a >> b >> c;
        cout << (a + b + c) - min(a, min(b, c)) << endl;
    }
    return 0;
}
