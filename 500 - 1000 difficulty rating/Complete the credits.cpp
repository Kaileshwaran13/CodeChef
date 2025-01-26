#include <iostream>

using namespace std;

int main() {
    int t, c;
    cin >> t;
    while (t--) {
        cin >> c;
        if (c > 65)
            cout << "Overload" << endl;
        else if (c < 35)
            cout << "Underload" << endl;
        else
            cout << "Normal" << endl;
    }
    return 0;
}
