#include<bits/stdc++.h>
using namespace std;

int main() {

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector < long long > a(n), b(n);
        long long sum = 0;
        long long even_a = 0, even_b = 0;
        long long odd_a = 0, odd_b = 0;
        long long total_mismatched = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0) even_a++;
            else odd_a++;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sum += b[i];
            if (b[i] % 2 == 0) even_b++;
            else odd_b++;
        }
        total_mismatched = n - (min(even_a, even_b) + min(odd_a, odd_b));
        ans = sum - total_mismatched;
        cout << ans / 2 << '\n';

    }
}
