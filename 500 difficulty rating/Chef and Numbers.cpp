#include <bits/stdc++.h>
using namespace std;

long S(long x) {
    long sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    long n;
    cin >> n;
    int cnt = 0;
    for (long i = n - 100; i <= n; i++) {
        if (i + S(i) + S(S(i)) == n) {
            cnt++;
        }
    }
    cout << cnt <<'\n';
}
