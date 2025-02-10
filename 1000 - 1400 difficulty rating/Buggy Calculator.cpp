#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        long long int result = 0;
        long long int place = 1;

        while (a > 0 || b > 0) {
            int rem1 = a % 10;
            int rem2 = b % 10;
            int digitSum = (rem1 + rem2) % 10;

            result = result + digitSum * place;

            a /= 10;
            b /= 10;
            place *= 10;
        }

        cout << result << '\n';
    }
}
