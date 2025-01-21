#include <iostream>

using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--)
    {
        int sum = 0, m;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < k; i++) sum += a[i];
        m = sum;
        for (int i = k; i < n; i++)
        {
            sum += a[i] - a[i - k];
            m = max(sum, m);
        }
        cout << m << endl;
    }
    return 0;
}
