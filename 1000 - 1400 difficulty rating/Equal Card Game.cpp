#include<iostream>

using namespace std;

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        cin >> k;
        int remainder = 52 - k;
        while (remainder >= k) {
            remainder = remainder - k;
        }
        cout << remainder << endl;
    }
    return 0;
}
