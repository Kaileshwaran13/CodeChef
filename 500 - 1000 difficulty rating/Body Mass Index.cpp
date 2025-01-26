#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int c = a / (b * b);
        if (c <= 18)
            cout << 1 << endl;
        else if (c >= 19 and c <= 24)
            cout << 2 << endl;
        else if (c >= 25 and c <= 29)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }
    return 0;
}
