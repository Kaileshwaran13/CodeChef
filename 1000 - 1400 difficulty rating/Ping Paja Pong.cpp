#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        if ((x + y) / k & 1)
            cout << "Paja" << '\n';
        else
            cout << "Chef" << '\n';
    }
    return 0;
}
