#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        long long N, countEven = 0, countOdd = 0;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] % 2)
                countOdd++;
            else
                countEven++;
        }
        long long ans = 1;
        while (countEven) {
            ans = ans * 2;
            ans = ans % 1000000007;
            countEven--;
        }
        if (countOdd)
            cout << ans << '\n';
        else
            cout << ans - 1 << '\n';
    }
    return 0;
}
