#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0)
                zero++;
            else
                one++;
        }
        if (one >= zero)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}
