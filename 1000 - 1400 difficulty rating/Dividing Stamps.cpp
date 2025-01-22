#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int n, sum(0), sum1(0);
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
        sum1 += i;
    }
    if (sum == sum1) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
