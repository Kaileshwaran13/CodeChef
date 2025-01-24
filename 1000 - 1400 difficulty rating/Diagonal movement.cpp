#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int a = abs(x) + abs(y);
        if (a % 2 == 0) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
}
