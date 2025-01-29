#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int base;
        cin >> base;
        int actualBase = base - 2;
        int actualHeight = base - 2;
        int levelOfSquares = (actualHeight / 2);
        int totalSquares = levelOfSquares * (levelOfSquares + 1) / 2;
        cout << totalSquares << endl;

    }
}
