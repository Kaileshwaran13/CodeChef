#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int count = 0;
        while (n > 0) {
            if (n % 2)
                count++;
            n /= 2;
        }

        cout << count - 1 << endl;
    }
    return 0;
}
