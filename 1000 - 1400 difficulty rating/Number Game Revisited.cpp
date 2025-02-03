#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n % 4 == 1 ? cout << "ALICE" << '\n' : cout << "BOB" << '\n';
    }
    return 0;
}
