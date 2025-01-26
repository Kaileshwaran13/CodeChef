#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if (Y > Z) {
            if (Y % Z != 0)
                cout << (Y / Z + 1) * X << endl;
            else
                cout << (Y / Z) * X << endl;
        } else {
            cout << X << endl;
        }
    }
    return 0;
}
