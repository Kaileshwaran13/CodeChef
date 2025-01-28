#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
long memo[MAXN];

long func(long n) {
    if (n < MAXN && memo[n] != -1) {
        return memo[n];
    }
    long result;
    if (n >= 12) {
        result = func(n / 2) + func(n / 3) + func(n / 4);
    } else {
        result = n;
    }
    if (n < MAXN) {
        memo[n] = result;
    }
    return result;
}

int main() {
    memset(memo, -1, sizeof(memo));
    long n;
    while (cin >> n) {
        cout << func(n) << endl;
    }
}
