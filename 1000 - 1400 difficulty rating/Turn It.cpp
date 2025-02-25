#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int U, V, A, S;
        cin >> U >> V >> A >> S;
        int speedatturning = U * U - 2 * A * S;
        if (speedatturning <= V * V) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }

    }
    return 0;
}
