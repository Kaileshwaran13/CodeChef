#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int ans = 0;
        cin >> n;
        for (int j = n; j >= 1; j -= 2) {
            ans += (j * j);
        }
        cout << ans << endl;
    }
    return 0;
}
