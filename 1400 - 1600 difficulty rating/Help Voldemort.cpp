#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum = sum + (a[i] * a[i + 1]);
    }
    cout << sum << endl;
    return 0;
}
