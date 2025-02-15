#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    int qrr[q];
    for (int i = 0; i < q; i++) {
        cin >> qrr[i];
    }
    long long modu = pow(10, 9) + 7;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum = ((sum % modu) + (arr[i] % modu) + modu) % modu;
    }
    for (int i = 0; i < q; i++) {
        sum = (2 * sum) % modu;
        cout << sum << endl;
    }

}
