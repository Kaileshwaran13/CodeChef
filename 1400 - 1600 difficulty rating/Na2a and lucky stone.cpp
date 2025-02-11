#include <bits/stdc++.h>
using namespace std;

int main() {
    size_t n, min = INT_MAX;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        size_t a, factor5 = 0, factor2 = 0;
        cin >> a;
        size_t dummy1 = a;
        while (dummy1 % 5 == 0) {
            factor5++;
            dummy1 /= 5;
        }
        size_t dummy2 = a;
        while (dummy2 % 2 == 0) {
            factor2++;
            dummy2 /= 2;
        }
        if (factor5 > factor2) {
            size_t power = (factor5 - factor2 + 1) / 2;
            a *= pow(4, power);
            cout << a << endl;
        }
        else {
            cout << a << endl;
        }
    }

    return 0;
}
