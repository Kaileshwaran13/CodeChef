#include <bits/stdc++.h>
using namespace std;

long long binpow(long long x, long long n) {
    if (n == 0) {
        return 1;
    }
    if (x == 0) {
        return 0;
    }
    if (n % 2 == 0) {
        long long temp = binpow(x, n / 2);
        return temp * temp;
    }
    return x * binpow(x, n - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long c;
        cin >> c;
        long long a = 0;
        long long b = 0;
        bool whether_set = false;
        int n = log2(c) + 1;
        for (int i = n; i >= 1; i--) {
            long long check = binpow(2, i - 1);
            if ((check & c) == 0) {
                a += check;
                b += check;
            } else if ((check & c) != 0) {
                if (whether_set) {
                    a += 0;
                    b += check;
                } else {
                    a += check;
                    b += 0;
                    whether_set = true;
                }
            }
        }
        cout << a * b << '\n';
    }
}
